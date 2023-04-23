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
#include<limits.h>
#include<cmath>
class Pair{
    
   public:
  int minimum;
  int maximum;
  bool bst;
   
};

Pair BST(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
       Pair obj;
        obj.minimum =INT_MAX;
        obj.maximum = INT_MIN;
        obj.bst = true;
    return obj;
    }
    
    Pair left= BST(root->left);
    Pair right =BST(root->right);
    
  
    bool  isBSTfinal=(root->data >left.maximum) && (root->data < right.minimum) && left.bst && right.bst;
   
    Pair obj;
    obj.minimum=min(root->data,min(left.minimum,right.minimum));
    obj.maximum=max(root->data,max(left.maximum,right.maximum));
    obj.bst=isBSTfinal;
    return obj;
        
    
    
}

bool isBST(BinaryTreeNode<int> *root){

    return BST(root).bst;
}
