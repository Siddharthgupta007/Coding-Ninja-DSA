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

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	Node *temp = head;
	if(head == NULL)
	return head;
	if(pos == 0)
	{
		head = temp->next;
		delete temp;
		return head;
	}

  int count = 0;
	while(count < pos -1 && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if(pos > count+1)
	return head;
    if(temp->next  == NULL )
	return head;

	if(temp!=NULL)
	{
        Node *address1 = temp->next;
		Node *address2= address1->next;
		temp->next= address2;
		delete address1;
		return head;
	}

	
	return head;
}
