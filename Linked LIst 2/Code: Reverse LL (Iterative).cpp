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

Node *reverseLinkedList(Node *head) {
    // Write your code here

	Node *current = head;
	Node *previous= NULL;
	Node *nextOn ;

	while(current != NULL)
	{
		 nextOn = current->next;
		current->next = previous;
		previous = current;
		 current = nextOn;

	}

	return previous;
}
