/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
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

********************************************************/

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

	BinaryTreeNode<int> *nodeleft= helper(root->left, a, b);
	BinaryTreeNode<int> *noderight = helper(root->right, a, b);

	if(nodeleft == NULL && noderight == NULL)
	{
		return NULL;
	}
	else if(nodeleft == NULL && noderight != NULL)
	{
		return noderight;
	}
	else if(nodeleft!= NULL && noderight ==NULL )
	{
		return nodeleft;
	}
	else
	{
		return root;
	}
}

int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    // Write your code here
	if(root == NULL)
	{
		return -1;
	}

	return helper(root, a, b)->data;
    

}
