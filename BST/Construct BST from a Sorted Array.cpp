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
BinaryTreeNode<int>* helper(int *input, int start, int end )
{
   int middle = (start + end)/2;

   if(start>end)
   {
	   return NULL;
   }

   BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[middle]);

   BinaryTreeNode<int> *left = helper(input, start, middle-1);
   BinaryTreeNode<int> *right = helper(input, middle+1, end);

   root->left = left;
   root->right= right;

   return root;
}

BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Write your code here
	return helper(input, 0,n-1);
}
