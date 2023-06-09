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

Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
	if(head == NULL)
	{
		return head;
	}
	if(head->next == NULL)
	{
		return head;
	}

	if(pos == 0)
	{
		Node *temp = head;
		head = temp->next;
		delete temp;
		return head;

	}
	if(pos ==1)
	{
		Node *temp = head->next;
		head->next = temp->next;
		delete temp;
		return head;
	}

	Node *temp= deleteNodeRec(head->next, pos-1);

	return head;
}
