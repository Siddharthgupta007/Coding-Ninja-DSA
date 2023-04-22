// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/
class node{
    public:
	int data;
	node *left, *right;
};

// return new node 
node *getnode(int data){
	node *temp = new node();
	temp->data = data;
	temp->left = temp->right = NULL;
}

bool aresibling(BinaryTreeNode<int> *root, int p , int q)
{
    if(root == NULL)
    {
        return false;
    }

    if(root->left &&root->right)
    {
        if((root->left->data == p && root->right->data == q) || (root->right->data == p && root->left->data == q))
        {
            return true;
        }
    }

    return (aresibling(root->left, p, q) || aresibling(root->right, p, q));
}

#include<queue>

bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
   if(root == NULL)
   {
       return false;
   }

   bool is_sibling = aresibling(root, p, q);
   if(is_sibling)
   {
       return false;
   }

   bool find_P = false;
   bool find_Q = false;

queue<BinaryTreeNode<int>*> pendingNodes;

pendingNodes.push(root);

while(!pendingNodes.empty())
{
    int size = pendingNodes.size();
    find_P = false;
    find_Q = false;

    while(size--)
    {
        BinaryTreeNode<int> *help = pendingNodes.front();
        pendingNodes.pop();

        if(help->data == p)
        find_P = true;

       else if(help->data == q)
        find_Q = true;

        if(help->left) 
        {
            pendingNodes.push(help->left);
        }
        if(help->right)
        {
            pendingNodes.push(help->right);
        }

    }

    if(find_P && find_Q && !is_sibling)
    return true;

}


return false;

}
