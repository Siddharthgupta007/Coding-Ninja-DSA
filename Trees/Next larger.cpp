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

TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) 
{
    // Write your code here
    if(root == NULL)
    return NULL;

    TreeNode<int> *ans = NULL;

    if(root->data > x)
    {
        ans = root;
        // return ans;
    }

    for(int i=0; i<root->children.size(); i++)
    {
        TreeNode<int>* temp = getNextLargerElement(root->children[i],  x);
        if(ans == NULL) ans = temp;
        if(temp!=NULL && temp->data < ans->data){
            ans = temp;
        }
    }

    return ans;
}
