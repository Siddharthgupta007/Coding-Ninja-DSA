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
template<typename T>
class SecondLargestReturnType{
    public:
    TreeNode<T> *largest;
    TreeNode<T> *secondLargest;

    SecondLargestReturnType(TreeNode<T> *first, TreeNode<T> *second)
    {
        this->largest = first;
        this->secondLargest = second;
    }
};

SecondLargestReturnType<int> *getSecondLargestNodeHelper(TreeNode<int> *root)
{
   if(root == NULL)
   {
       return new SecondLargestReturnType<int>(NULL,NULL);
   }

   SecondLargestReturnType<int> *ans= new SecondLargestReturnType<int>(root,NULL);
   for(int i=0; i<root->children.size();i++)
   {
       SecondLargestReturnType<int> *childans = getSecondLargestNodeHelper(root->children[i]);

       if(childans->largest->data > ans->largest->data)
       {
           if(childans->secondLargest == NULL)
           {
               ans->secondLargest = ans->largest;
               ans->largest= childans->largest;
           }
           else {
               if(childans->secondLargest->data >ans->largest->data)
               {
                   ans->secondLargest = childans->secondLargest;
                   ans->largest= childans->largest;
               } else {
                 ans->secondLargest = ans->largest;
                 ans->largest = childans->largest;
               }
           }
       } else {
         if (ans->largest->data != childans->largest->data &&
             (ans->secondLargest == NULL ||
              childans->largest->data > ans->secondLargest->data)) {
           ans->secondLargest = childans->largest;
         }
       }
   }

   return ans;


}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    return getSecondLargestNodeHelper(root)->secondLargest;
}
