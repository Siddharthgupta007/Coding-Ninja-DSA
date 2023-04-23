// Following is the Binary Tree node structure
/**************
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
***************/
int height(BinaryTreeNode<int>* root)
{
    if(root==NULL)
        return 0;
    
    return 1+ max(height(root->left),height(root->right));
}
#include<vector>

vector<int>* longestPath(BinaryTreeNode<int>* root) {
	// Write your code here
    if(root->left == NULL && root->right == NULL)
    {
        vector<int> *v = new vector<int>();
        v->push_back(root->data);
        return v;
    }

  int left_height=0;
  int right_height = 0;
   if(root->left)
     left_height = height(root->left);
    if(root->right)
   right_height = height(root->right);

    if(left_height>right_height)
    {
        vector<int> *v1= longestPath(root->left);
        v1->push_back(root->data);
        return v1;
    }
    else
    {
        vector<int> *v2 = longestPath(root->right);
        v2->push_back(root->data);
        return v2;
    }

/*
     if(v1->size()>=v2->size())
    {
        v1->push_back(root->data);
        return v1;
    }
    else

    v2->push_back(root->data);

    vector<int> *v1 = longestPath(root->left);
    vector<int> *v2 = longestPath(root->right);
   

    return v2;
    */


}
