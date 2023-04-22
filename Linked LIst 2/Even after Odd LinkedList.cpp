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

Node *evenAfterOdd(Node *head)
{
	Node *evenhead = NULL;
	Node *eventail = NULL;
	Node *oddhead = NULL;
	Node *oddtail = NULL;

	while(head != NULL)
	{
		if(head->data %2 == 0)
		{
			if(evenhead == NULL)
			{
				evenhead = head;
				eventail  = head;
				head = head->next;
			}
			else
			{  
				eventail->next = head;
				eventail = eventail->next;
				head = head->next;

			}
		}

		else
		{
			if(oddhead == NULL)
			{
				oddhead = head;
				oddtail  = head;
				head = head->next;
			}

			else
			{
				oddtail->next = head;
				oddtail  = oddtail->next;
				head = head->next;
			}
		}
	}

	if(oddhead == NULL)
	{
		return evenhead;
	}
	if(evenhead  == NULL)
	{
		return oddhead;
	}

    oddtail->next=NULL;
    eventail->next=NULL;
	oddtail ->next = evenhead;
	
return oddhead;


}
