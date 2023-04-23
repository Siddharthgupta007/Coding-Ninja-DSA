
/*********************************************************
 
    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    
        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head) {
    if (head == NULL || head->next == NULL) {
        return;
    }

   Node *temp=head;
   while(temp!= NULL && temp->next!= NULL)
   {
       Node *help = temp->next->next;
       temp->next->next = NULL;
       temp->next  = help;
       temp = temp->next;
   }
}

