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

int findNodeRec(Node *head, int n)
{
	//Write your code her
        if (head == NULL) {
          return -1;
        }

        if (head->data == n)
          return 0;

        int smallans = findNodeRec(head->next, n);
        if (smallans == -1)
        {
		return smallans;
        }
        else
		return smallans+1;
}
