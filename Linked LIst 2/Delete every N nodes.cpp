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

Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
	Node *t1 = head;
	Node *t2 = head;
	int count1=1;
	int count2=0;
	if(N==0)
	{
		return head;
	}
	if(M==0)
	{
		return NULL;
	}
	while(t1 != NULL )
	{
	count1=1;
	while(count1 != M && t1 != NULL)
	{
		t1  = t1->next;
		if(t1!=NULL)
		{
			count1++;
		}
	}
	if(t1==NULL)
	{
		return head;
	}
		t2 = t1->next;
		count2=0;
        while (count2 != N && t2 != NULL)
		{
			
          Node *help1 = t2;
          t2 = t2->next;
          delete help1;
          count2++;
        }

                t1->next = t2;
                t1 = t2;
           

        }
		return head;
}
