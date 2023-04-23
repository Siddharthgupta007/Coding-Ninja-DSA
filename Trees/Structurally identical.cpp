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

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
      if(root1->children.size()!=root2->children.size())
        return false;
    if(root1 == NULL || root2 == NULL)
    {
        return true;
    }
   if((root1 == NULL && root2!= NULL ) || root1 != NULL && root2 == NULL)
    {
        return false;
    }

    for(int i=0; i<root1->children.size() && i<root2->children.size(); i++)
    {
       return areIdentical(root1->children[i],root2->children[i]);
    }
 
 
   if(root1->data == root2->data)
    return true; 
    else
    return false;

    //return false;
}
