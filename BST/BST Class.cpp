/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/
 //#include<queue>
// #include<string.h>


 //class BST {
     // Define the data members
//     BinaryTreeNode<int> *root;
//    public:
//     BST() { 
//         // Implement the Constructor
//         root = NULL;
//     }
// 	~BST()
// 	{
// 		delete root;
// 	}

// 	/*----------------- Public Functions of BST -----------------*/

//     void remove(int data) { 
//         // Implement the remove() function 
// 		root = deleteData(data, root);
//     }
//     private:

// 	private:
// 	BinaryTreeNode<int>* deleteData(int data, BinaryTreeNode<int>* node) {
// 		if (node == NULL) {
// 			return NULL;
// 		}

// 		if (data > node->data) {
// 			node->right = deleteData(data, node->right);
// 			return node;
// 		} else if (data < node->data) {
// 			node->left = deleteData(data, node->left);
// 			return node;
// 		} else {
// 			if (node->left == NULL && node->right == NULL) {
// 				delete node;
// 				return NULL;
// 			} else if (node->left == NULL) {
// 				BinaryTreeNode<int>* temp = node->right;
// 				node->right = NULL;
// 				delete node;
// 				return temp;
// 			} else if (node->right == NULL) {
// 				BinaryTreeNode<int>* temp = node->left;
// 				node->left = NULL;
// 				delete node;
// 				return temp; 
// 			} else {
// 				BinaryTreeNode<int>* minNode = node->right;
// 				while (minNode->left != NULL) {
// 					minNode = minNode->left;
// 				}
// 				int rightMin = minNode->data;
// 				node->data = rightMin;
// 				node->right = deleteData(rightMin, node->right);
// 				return node;
// 			}
// 		}
// 	}

// 	private:

//     void printTree(BinaryTreeNode<int>* node) 
// 	{

// 		if(node== NULL)
// 		return ;

// 		cout<<node->data<<":";

// 		if(node->left)
// 		{
// 			cout<<"L:"<<node->left->data<<",";

// 		}
// 		if(node->right)
// 		{
// 			cout<<"R:"<<node->right->data;
// 		}
               

// 				cout<<endl;
// 				printTree(node->left);
// 				printTree(node->right);
//         }

//     public:

//     void print() { 
//         // Implement the print() function
//         printTree(root);
//     }
   
//    private:
//    BinaryTreeNode<int> *insert(int data, BinaryTreeNode<int> *node)
//    {
// 	   if(node == NULL)
// 	   {
// 		   BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
// 		   return newNode;
// 	   }

// 	   if(node->data< data)
// 	   {
// 		   node->left  = 	insert(data, node->left);
// 	   }
// 	   else
// 	   node->right = insert(data,node->right);

// 	   return node;
//    }


// public:
//     void insert(int data) { 
//         // Implement the insert() function 
// 		this->root = insert(data, this->root);

//     }
    


// private:

//     bool search(int data, BinaryTreeNode<int> *node)
//     {
//        if (node == NULL) {
// 			return false;
// 		}

// 		if (node->data == data) {
// 			return true;
// 		}
        
//          else if (data < node->data) {
// 			return search(data, node->left);
// 		}
        
//          else {
// 			return search(data, node->right);
// 		}
//     }

//     public:

//     bool search(int data) {
// 		// Implement the search() function 
//         return search(data, root);
//     }
// };




class BST
{
    // Complete this class
public:
    BinaryTreeNode<int> *root;

private:
    bool sea(int key, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
            return false;
        if (node->data == key)
            return true;

        bool ans;
        if (key < node->data)
            ans = sea(key, node->left);
        else
            ans = sea(key, node->right);

        return ans;
    }

    BinaryTreeNode<int> *ins(int key, BinaryTreeNode<int> *node)
    {

        if (node == NULL)
        {
            BinaryTreeNode<int> *inode = new BinaryTreeNode<int>(key);
            return inode;
        }
        if (key > node->data)
            node->right = ins(key, node->right);
        else
            node->left = ins(key, node->left);

        return node;
    }

    BinaryTreeNode<int> *findMin(BinaryTreeNode<int> *node)
    {
        if (node->left == NULL)
            return node;
        return findMin(node->left);
    }

    BinaryTreeNode<int> *del(int key, BinaryTreeNode<int> *node)
    {

        if (node == NULL)
            return NULL;

        if (key > node->data)
            node->right = del(key, node->right);
        else if (key < node->data)
            node->left = del(key, node->left);
        else
        {
            // If node is leaf
            if (node->left == NULL && node->right == NULL)
            {
                delete node;
                return NULL;
            }
            else if (node->left == NULL)
            {
                BinaryTreeNode<int> *temp = node->right;
                node->right = NULL;
                delete node;
                return temp;
            }
            else if (node->right == NULL)
            {
                BinaryTreeNode<int> *temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            }
            else
            {
                BinaryTreeNode<int> *minnode = findMin(node->right);

                node->data = minnode->data;
                node->right = del(minnode->data, node->right);
                return node;
            }
        }

        return node;
    }
    void pr(BinaryTreeNode<int> *node)
    {
        if (node == NULL)
            return;

        cout << node->data << ":";

        if (node->left != NULL)
            cout << "L:" << node->left->data << ",";
        if (node->right != NULL)
            cout << "R:" << node->right->data;
        cout << endl;

        pr(node->left);
        pr(node->right);
    }

public:
    void insert(int key)
    {
        this->root = ins(key, this->root);
    }
    void remove(int key)
    {
        this->root = del(key, this->root);
    }
    bool search(int key)
    {
        return sea(key, this->root);
    }
    void print()
    {
        pr(root);
    }
};
