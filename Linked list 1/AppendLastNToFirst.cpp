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
int lengther(Node *head)
{
    //Write your code here
	int count=0;
	Node *temp=head;
	while(temp!= NULL)
	{
		temp = temp->next;
		count++;
	}

	return count;
}


Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
	int length = lengther(head);
	Node *temp = head;

	if(n == 0)
	{
		return head;
	}

	int count=0;
	while(count < (length -n)-1)
	{
		count++;
		head= head->next;
	}

	if(head == NULL)
	return head;

	Node *helper = head;
	head = head->next;
	helper->next = NULL;




	 int counthelp=0;
	 Node *help2 = head;
         while (help2->next != NULL) {
           help2 = help2->next;
         }
         help2->next = temp;

		 return head;
}
