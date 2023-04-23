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
int search(int *inorder, int start, int end, int curr)
{
	for(int i=start; i<=end; i++)
	{
		if(inorder[i] == curr)
		return i;
	}

	return -1;
}
BinaryTreeNode<int> *help(int *preorder, int *inorder, int start, int end)
{ 
	static int idx =0;


	if(start>end)
	return NULL;
	
	int curr = preorder[idx];
	idx++;
	
	BinaryTreeNode<int> *Temp = new BinaryTreeNode<int>(curr);


	if(start == end)
	return Temp;


	int pos = search(inorder, 	start, end, curr);

	Temp->left=help(preorder, inorder, start, pos-1);
	Temp->right = help(preorder, inorder, pos+1, end);

	return Temp;

}
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
	BinaryTreeNode<int> *root = help(preorder, inorder, 0, preLength-1);
}
