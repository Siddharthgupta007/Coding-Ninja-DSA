/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/


class Stack {
	// Define the data members
    Node *head;
    int count;
    
   public:
     Stack()
    {
        head = NULL;
        count=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return count;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return head == NULL;
    }

    void push(int element) {
        // Implement the push() function
         if(head == NULL)
        {
            Node *newnode = new Node(element);
            head = newnode;
            count++;
        }

        else{
       Node *newnode = new Node(element);
        newnode->next = head;
        head = newnode;
        count++;
        }
    }

    int pop() {
        // Implement the pop() function
        if(head == NULL)
        {

            return -1;
        }
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        count--;
        return ans;
    }

    int top() {
        // Implement the top() function
         if(head == NULL)
        {
            return -1;
        }

        return head->data;
    }
};
