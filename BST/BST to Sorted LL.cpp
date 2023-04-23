/**********************************************************

	Following are the Binary Tree Node class structure and the 
	Node class structure

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

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

***********************************************************/
#include<iostream>
using namespace std;
class Pair{
  public: 
  Node<int> *head;
  Node<int> *tail;
};




	Pair ReturnHeadTail(BinaryTreeNode<int> *root)
	{
   
      if(root== NULL)
	  {
		  Pair p;
		  p.head = NULL;
		  p.tail = NULL;
		  return p;
	  }

	  Node<int> *middle = new Node<int>(root->data);
	  Pair leftnode = ReturnHeadTail(root->left);
	   Pair rightnode = ReturnHeadTail(root->right);

	   Pair result;


	   if(leftnode.head == NULL && rightnode.head== NULL)
	   {
            result.head = middle;
			result.tail = middle;
			return result;
	   }

	   else if(leftnode.head == NULL && rightnode.head != NULL)
	   {
		   result.head = middle;
		   middle->next = rightnode.head;
		   result.tail = rightnode.tail;
	   }

	   else if( rightnode.head == NULL && leftnode.head !=NULL)
	   {
		   result.head = leftnode.head;
		   leftnode.tail->next = middle;
		   result.tail = middle;
	   }
	   else
	   {
		   result.head = leftnode.head;
		   leftnode.tail->next = middle;
		   middle->next = rightnode.head;
		   result.tail = rightnode.tail;
	   }


	   return result;
	  
		


		/*
        if(head == NULL)
		{
			pair<Node<int>,Node<int>> p;
			p.first = NULL;
			p.second = NULL;
			return p;
		}

		Node<int> *Head = head;
		Node<int> *Tail = head;

		while(Tail != NULL)
		{
			Tail = Tail->next;
		}

		pair<Node<int>, Node<int>> p1;
		p1.first = Head;
		p1.second = Tail
		return p1;. rfghy6ty6tgvb ty76tgft6g6g6gvbythtttttttt54redc vgbhjui9876gfcv tfdgvhyu76t5rfgy6ty65tghnm,./jhgfdsq4
		*/
	}
	

Node<int>* constructLinkedList(BinaryTreeNode<int>* root)
{
	return ReturnHeadTail(root).head;
}
