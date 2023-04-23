/***********************************************************
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

***********************************************************/

int height(BinaryTreeNode<int>* root) {
    // Write our code here
	if(root == NULL)
	{
		return 0;
	}
	 
	int smallans1=  height(root->right);// + height(root->left)	;
	int smallans2 = height(root->left);



	return 1+max(smallans1, smallans2);
}
