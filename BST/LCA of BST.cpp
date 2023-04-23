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
BinaryTreeNode<int> *helper(BinaryTreeNode<int> *root, int a, int b)
{
	if(root == NULL)
	{
		return NULL;
	}
	if(root->data == a || root->data == b)
	{
		return root;
	}

	BinaryTreeNode<int> *leftnode = helper(root->left, a, b);
	BinaryTreeNode<int> *rightnode = helper(root->right, a, b);

	if(leftnode == NULL && rightnode ==NULL)
	{
		return NULL;
	}
	else if(leftnode == NULL && rightnode != NULL)
	{
		return rightnode;
	}
	else if(leftnode != NULL && rightnode == NULL)
	{
		return leftnode;
	}
	else
	{
		return root;
	}
}

int getLCA(BinaryTreeNode<int>* root , int val1 , int val2){
    // Write your code here
	if(root== NULL)
	{
		return -1;
	}

	return helper(root, val1,val2)->data;
}
