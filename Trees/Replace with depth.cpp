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

void helper(TreeNode<int>* root, int depth)
{
    
     if(root == NULL)
     {
         return;
     }

     root->data = depth;
     depth++;
     for(int i=0 ;i<root->children.size(); i++)
     {
         helper(root->children[i],depth);
     }
     
     
}

void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    helper(root, 0);
}
