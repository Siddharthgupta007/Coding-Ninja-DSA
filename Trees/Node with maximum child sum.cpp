/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
#include<iostream>
using namespace std;
//int max=0;

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
  
  TreeNode<int>* ans  = root;
  int sum = root->data;

  for (int i = 0; i < root->children.size(); i++) {
    sum += root->children[i]->data;
  }

  for (int i = 0; i < root->children.size(); i++)
  {
      TreeNode<int> *smallmax= maxSumNode(root->children[i]);
      int smallans = smallmax->data;

      for(int i=0; i<smallmax->children.size(); i++)
      {
          smallans += smallmax->children[i]->data;
      }

      if(smallans>= sum)
      {
          ans = smallmax;
          sum = smallans;
      }
  }

  return ans;
}
