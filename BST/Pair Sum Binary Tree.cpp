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
/*
int i=0;
int helper(BinaryTreeNode<int> *node, int *arr)
{
	if(node == NULL)
	{
		return 0;
	}

	arr[i] = node->data;
	i++;
	helper(node->left, arr);
	helper(node->right, arr);
	return i;
}
*/

#include<bits/stdc++.h>

void vecthelp(BinaryTreeNode<int> *node, vector<int> &v)
{
  if(node == NULL)
  {
	  return ;
  }
  v.push_back(node->data);
  vecthelp(node->left, v);
  vecthelp(node->right, v);

}


/*
void printpair(int *arr, int sum, int start, int end)
{
	int s=start;
	int  e= end;
	
	while(s<e)
	{
		if(arr[s] + arr[e] == sum)
		{
			cout<<arr[s]<<" "<<arr[e];
			cout<<endl;
			s++;
			e--;
		}

		else if(arr[s] + arr[e] < sum)
		{
			s++;
		}
		else
		{
			e--;
		}
	}

	
}
*/

void pairSum(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
	if(root == NULL)
	{
		return;
	}

	//int arr[100];
	//int start=0;
	//int end = helper(root, arr)-1;

	//sort(arr, arr+end-1);

	vector<int> v;
	vecthelp(root, v);

	sort(v.begin(), v.end());
	int s = 0;
	int e = v.size()-1;

	

	while(s<e)
	{
		if(v[s] + v[e] == sum)
		{
			cout<<v[s]<<" "<<v[e]<<endl;
			
			s++;
			e--;
		}

		else if(v[s] + v[e] < sum)
		{
		
			s++;
                } else {
                  e--;
                }
        }
}
