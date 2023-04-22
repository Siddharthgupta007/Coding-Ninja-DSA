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

Node *bubbleSort(Node *head)
{
	// Write your code here
	if(head == NULL || head->next == NULL)
	{
       return head;
	}
	Node *end;
	Node *r;
	Node *p;
	Node *q;
	Node *temp;

	for(end = NULL; end!=head->next; end = p)
	{
		for(r=p =head ; p->next!= end; r=p, p=p->next  )
		{
			q= p->next;
			if(p->data >q->data)
			{
				p->next = q->next;
				q->next = p;
				if(p!= head)
				{
					r->next = q;
				}
				else
				head = q;
				temp = p;
				p=q;
				q= temp;
			}
		}
	}
	return head;

}
