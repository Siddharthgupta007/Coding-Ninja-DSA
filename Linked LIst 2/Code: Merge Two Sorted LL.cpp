/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
	if(head1 == NULL)
	{
		return head2;
	}
	if(head2 == NULL)
	return head1;
    //Write your code here
	Node *finalhead ;
	Node *finaltail ;
	Node * h1 = head1;
	Node *h2 = head2;

	if(head1->data <= head2->data)
	{
		finalhead = head1;
		finaltail = head1;
		head1 = head1->next;
	}
	else{
		finalhead = head2;
		finaltail = head2;
		head2 = head2->next;

	}

	while(head1 != NULL && head2 != NULL)
	{
		if(head1->data <= head2->data)
		{
			finaltail->next = head1;
			finaltail = head1;
		     head1 = head1->next;
		}
		else
		{
			finaltail->next = head2;
			finaltail  = head2;
			head2 = head2->next;
		}
	}

	while(head1 != NULL || head2 != NULL)
	{
		if(head2 == NULL)
		{
           finaltail->next = head1;
		   finaltail = head1;
		   head1 = head1->next;
		}
		else
		{
			finaltail->next = head2;
		   finaltail = head2;
		   head2 = head2->next;
		}
	}

	return finalhead;


}
