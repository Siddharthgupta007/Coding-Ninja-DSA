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
#include<limits.h>
class Pair{
  public:
  int min;
  int max;
  bool isBST;
  int height;

};

Pair helper(BinaryTreeNode<int> *root)
{
	if(root == NULL)
	{
		Pair ans;
		ans.min=INT_MAX;
		ans.max = INT_MIN;
		ans.isBST = true;
		ans.height = 0;
		return ans;
	}

	Pair leftans = helper(root->left);
	Pair rightans = helper(root->right);

	Pair ans;
	ans.min =min(root->data, min(leftans.min, rightans.min));
	ans.max = max(root->data, max(leftans.max,rightans.max));
	ans.isBST = (root->data > leftans.max) && (root->data < rightans.min) && leftans.isBST && rightans.isBST;
	ans.height = max(leftans.height, rightans.height);


	if(ans.isBST == true)
	{
		ans.height += 1;
	}


   return ans;

}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
	return helper(root).height;
}
