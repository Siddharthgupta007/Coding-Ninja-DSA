/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

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

	template <typename T>
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/
#include <queue>
#include<vector>

vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
	vector<Node<int>*> v;

	if(root == NULL)
	{
		v.push_back(NULL);
		return  v;
	}
    
	vector<Node<int>*> result;

	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	pendingNodes.push(NULL);
	Node<int> *head= NULL;
	Node<int> *tail = head;

	while(pendingNodes.size()!=0)
	{
		BinaryTreeNode<int> *temp = pendingNodes.front();
		pendingNodes.pop();

		if(temp == NULL)
		{
			tail->next = NULL;
			if(pendingNodes.size() == 0)
			break;

			pendingNodes.push(NULL);

			head = NULL;
			tail = NULL;


		}

		else
		{
			Node<int> *help = new Node<int>(temp->data);
			if(head == NULL)
			{
				head = help;
				tail  = help;
				v.push_back(head);
			}
			else
			{
				tail->next = help;
				tail = help;
			}

			if(temp->left)
               pendingNodes.push(temp->left);
           if(temp->right)
               pendingNodes.push(temp->right);


		}
	}
	
   
}
