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

void printIthNode(Node *head, int i)
{
    //Write your code herenode
  Node *temp= head;
  int count =1;
  
  
    while (count <=i && temp!=NULL) {
      temp = temp->next;
      count++;
    }

    if(temp == NULL)
    cout<<" ";
    else

    cout << temp->data;
  
}
