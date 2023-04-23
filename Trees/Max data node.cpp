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
int val = 0;
TreeNode<int>* maxDataNode(TreeNode<int>* root) 
{
    // // Write your code here
    // if(root== NULL)
    // return NULL;

     static TreeNode<int>* ans;

    if(root -> data > val)
    {
        val = root -> data;
        ans = root;
    }

    for(int i=0; i<root->children.size(); i++)
    {
        // if(ans->data < root->children[i]->data)
        // {
        //     ans = maxDataNode(root->children[i]);
        // }

        maxDataNode(root -> children[i]);
    }

    return ans;
}
