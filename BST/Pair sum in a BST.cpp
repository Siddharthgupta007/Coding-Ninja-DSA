/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/
#include<vector>
void nodeToVector(BinaryTreeNode<int> *node,int s, vector<int> &v)
{
	if(node == NULL)
	return;

	v.push_back(node->data);

	nodeToVector(node->left, s, v);
	nodeToVector(node->right, s, v);

}

#include <bits/stdc++.h>
void printNodesSumToS(BinaryTreeNode<int> *root, int key) {
    // Write your code here
	if(root == NULL)
	{
		return ;
	}

	vector<int> v;
	nodeToVector(root, key, v);

	sort(v.begin(), v.end());

	int s=0;
	int e = v.size()-1;

	while(s<e)
	{
		if(v[s]+ v[e] == key)
		{
			cout<<v[s]<<" "<<v[e]<<endl;
			s++;
			e--;
		}
		else if(v[s] + v[e] < key)
		{
			s++;
		}
		else
		{
			e--;
		}
	}	
}
