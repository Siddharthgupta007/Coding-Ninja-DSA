#include<queue>
#include<vector>

priority_queue<int> maxheap;
priority_queue<int, vector<int> , greater<int> > minheap;

void insert(int x)
{
   if(maxheap.size() == 0)
   {
       maxheap.push(x);
       //return ;
   }
   else{

   if(maxheap.size()>minheap.size())
   {
        if(x<maxheap.top())
        {
            minheap.push(maxheap.top());
            maxheap.pop();
            maxheap.push(x);
        }
        else{
            minheap.push(x);
        }
   }
   else
   {
        if(x <maxheap.top())
        {
            maxheap.push(x);
        } else {
          minheap.push(x);
          maxheap.push(minheap.top());
          minheap.pop();
        }
   }
   }

   if(maxheap.size() == minheap.size())
   {
       int medain = (maxheap.top() + minheap.top())/2;
       cout<<medain<<" ";
   }
   else
   {
       cout<<maxheap.top()<<" ";
   }
}

void findMedian(int *arr, int n)
{
    // Write your code here
    for(int i=0; i<n;i++)
    {
        insert(arr[i]);
    }
    
    
}
