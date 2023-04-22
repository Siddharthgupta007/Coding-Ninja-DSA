/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/


class Deque {
    // Complete this class
    int *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

	public :
	   Deque(int s) {
		data = new int[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
	}

	

	void insertFront(int element)
	{
		if(size == capacity)
		{
			cout<<"-1"<,endl;
			return ;
		}
		else
		{
           
		}
	}

	void insertRear(int element)
	{
		if(size == capacity)
		{
			cout<<"-1"<,endl;
			return ;
		}
		else
		{
			data[nextIndex] = element;
		    nextIndex = (nextIndex + 1) % capacity ;
		     if(firstIndex == -1) 
		      {
		       	firstIndex = 0;
		      }
		    size++;
		}
	}


    
    
};
