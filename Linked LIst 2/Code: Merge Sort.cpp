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
int lengther(Node *head)
{
    Node *temp = head;
    int count=0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

   return count;
}



Node *midPoint(Node *head)
{
    // Write your code here
	Node *slow= head;
	Node *fast= head->next;
	if(head == NULL)
	{return head;}

	while( fast != NULL && fast->next !=NULL)
	{
		slow= slow->next;
		fast = fast->next->next;
	}
	return slow;
}



Node *mergeSort(Node *head)
{
	//Write your code here
	if(head == NULL || head->next == NULL)
	return head;

	//breaking two halves;
	Node *head1 = head;
	Node *head2 ;



  /*int length  = lengther(head);
  int count=0;
  while(count < (length-1)/2)
  {
	  head2= head2->next;
	  count++;
  }
  
  //assinging head2 to 2nd list
  //assinging tail of first list to NULL

  Node *help = head2;
   head2 = head2->next;
  help ->next = NULL;
*/
Node *mid= midPoint(head);
head2 = mid->next;
mid->next = NULL;


  // two list created as head 1 and head 2
// recusive calll
  head1= mergeSort(head1);
  head2 = mergeSort(head2);

Node *result =  mergeTwoSortedLinkedLists(head1,head2);

return result;

}
