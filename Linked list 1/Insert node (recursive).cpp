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

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
	if(head == NULL)
	return head;

	if(i==0)
	{
		Node *newnode = new Node(data);
		newnode->next = head;
		head= newnode;
		return head;
	}

	if(i==1)
	{
		Node *newnode = new Node(data);
		newnode->next =  head->next;
		head->next = newnode;
		return head;
	}

	Node *temp = insertNode(head->next, i-1,  data);

	
	return head;
}
