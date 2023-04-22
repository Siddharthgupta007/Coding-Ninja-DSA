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
int lengther(Node * head)
{
	int count =0;
	Node *temp = head;
	while(temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return count;
}

// bool isPalindrome(Node *head)
// {
//     //Write your code here
// 	int length = lengther(head);
// 	if(length == 0 || length == 1)
// 	{
// 		return true;
// 	}

// 	else if(length %2 == 0)
// 	{
//         Node *head1= head;
// 		int count=0;
// 		Node *tail1=head;
// 		while(count< (length/2)-1)
// 		{
//            tail = tail->next;
// 		   count++;
// 		}
// 		Node *head2 = tail->next;
// 		tail1->next = NULL;
		
	
// 	}
// 	else
// 	{

// 	}


// }

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node* head){
    int length = lengther(head);
    if(length == 0 || length == 1){
        return true;
    }
    else{
        int mid = length / 2;
        Node* curr = head;
        for(int i = 0; i < mid; i++){
            curr = curr->next;
        }
        Node* secondHalfHead = reverseList(curr);
        Node* temp1 = head;
        Node* temp2 = secondHalfHead;
        bool isPalin = true;
        while(temp2 != NULL){
            if(temp1->data != temp2->data){
                isPalin = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        // restore the original list by reversing the second half again
        reverseList(secondHalfHead);
        // connect the first half and the reversed second half
        curr->next = NULL;
        return isPalin;
    }
}
