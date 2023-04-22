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

int length(Node *head) {
    // Write your code here
	// base case
	if(head == NULL)
	return 0;
	int count=0;
        if (head->next == NULL) {
          count++;
          return count;
        }

        count = length(head->next) + 1;
	return count;
	
}
