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

Node *kReverse(Node *head, int k)
{
	//Write your code here
	if(k==0)
	return head;
	if(head== NULL)
	{
		return NULL;
	}

	Node *current = head;
	Node *previous= NULL;
	Node *nextOn= NULL ;
	int count=0;

	while(current != NULL && count<k)
	{
		 nextOn = current->next;
		current->next = previous;
		previous = current;
		 current = nextOn;
		 count++;

	}

	head->next= kReverse(nextOn, k);

	return previous;
	
}
