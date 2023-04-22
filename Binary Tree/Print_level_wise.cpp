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
#include <queue>
#include <string.h>

void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
	if(root == NULL)
	return ;
	queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    
    while(pendingNodes.size() !=0)
    {
        BinaryTreeNode<int>* temp = pendingNodes.front();
        pendingNodes.pop();

		cout<<temp->data<<":";

        //string help = to_string(temp->data)+':';

        if(temp->left != NULL)
        {
			cout<<"L:"<<temp->left->data<<",";
           // help += "L:"+to_string(temp->left->data)+',';
            pendingNodes.push(temp->left);
        }
        else
        {
            
			cout<<"L:-1,";
			//help += "L:-1,";
        }

        if(temp->right !=NULL)
        {
			cout<<"R:"<<temp->right->data;
            //help += "R:"+ to_string(temp->right->data)+',';
            pendingNodes.push(temp->right);
        }
        else
        {
			cout<<"R:-1";
           // help += "R:-1,";
        }

		cout<<endl;
   /*
        if(help[help.length()-1] == ',' )
        {
            help = help.substr(0,help.length()-1);
        }
        cout<<help<<endl;
		*/

    }
}
