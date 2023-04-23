/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root == NULL)
    {
        return ;
    }

    BinaryTreeNode<int> * dublicate = new BinaryTreeNode<int>(root->data);
    BinaryTreeNode<int> *Tobeconnected = NULL;
        if(root->left != NULL)
    {
        Tobeconnected = root->left;
    }
    root->left = dublicate;
    dublicate->left= Tobeconnected;

    insertDuplicateNode(dublicate->left);
    insertDuplicateNode(root->right);

}
