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

Node *reverseLinkedListRec(Node *head)
{
    //Write your code here
	if(head == NULL)
	return head;
	if(head->next == NULL || head == NULL)
	{
		return head;
	}

	Node *temp = reverseLinkedListRec(head->next);
	Node *help = temp;
	while(help->next != NULL)
	{
		help = help->next;
	}
	help->next = head;
	help->next->next = NULL;

	return temp;
}
