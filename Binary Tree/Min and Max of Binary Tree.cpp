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

***********************************************************/

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
#include<limits.h>
int Maxelement(BinaryTreeNode<int> *root)
{
	if(root == NULL)
	{
		
		return INT_MIN;
	}
	int res = root->data;
	int leftres = Maxelement(root->left);
	int rightres = Maxelement(root->right);

	return max(res, max(leftres,rightres));
}
int Minelement(BinaryTreeNode<int> *root)
{
	if(root == NULL)
	{
		return INT_MAX;
	}
        int res = root->data;
	int leftres = Minelement(root->left);
	int rightres = Minelement(root->right);

	return min(res, min(leftres,rightres));
}


pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here

	pair<int,int> p;
	p.second = Maxelement(root);
	p.first = Minelement(root);

	return p;
	
}
