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

**************************/
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



Node *removeDuplicates(Node *head)
{
    //Write your code here
	Node *temp = head;
	int length  = lengther(head);
	int count =0;

	if(length == 0)
	{
		return head;
	}
	while(temp->next != NULL)
	{
		if(temp->next->data == temp->data)
		{
			Node *help = temp->next;
			temp->next= help->next;
			delete help;
			count++;
                } 
		else 
		{
                  temp = temp->next;
				  count++;
                }
        }

	return head;
}
