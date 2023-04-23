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
#include<stack>

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root == NULL){
		return;
	}

	stack<BinaryTreeNode<int>*> s1;
	stack<BinaryTreeNode<int>*> s2;
	s1.push(root);

	while(!s1.empty())
	{
	   while(!s1.empty())
	   {
		  BinaryTreeNode<int> *temp = s1.top();
		  s1.pop();
		  cout<<temp->data<<" ";
		   if(temp->left)
		   s2.push(temp->left);
		   if(temp->right)
		   s2.push(temp->right);
	   }
	   cout<<endl;

	   while(!s2.empty())
	   {
		   BinaryTreeNode<int> *temp = s2.top();
		   s2.pop();
		   cout<<temp->data<<" ";
		   if(temp->right)
		   s1.push(temp->right);
		   if(temp->left)
		   s1.push(temp->left);
	   }
	   cout<<endl;
	}

	//return;

}
