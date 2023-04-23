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
#include<math.h>
pair<int, bool> helper(BinaryTreeNode<int> *root)
{
	pair<int,bool> p;
	 if (root == NULL)
	 {
         p.first = 0;
		 p.second = true;
		 return p;
	 } 

	 pair<int,bool> p1 = helper(root->left);
	 pair<int,bool> p2 = helper(root->right);

	  pair<int,bool> ans;

	
    
	 if(abs(p1.first - p2.first)<=1)
	 {
		 if(p1.second && p2.second == true)
		 {
			 ans.first = p1.first + p2.first +1;
			 ans.second = true;
		 }
		 else
		 {
			  ans.first = p1.first + p2.first +1;
			 ans.second = false;
		 }
	 }

	 return ans;
}

bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here

	pair<int,bool> result = helper(root);
	return result.second;

}
