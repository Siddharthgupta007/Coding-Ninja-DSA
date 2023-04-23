#include<queue>

vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here

    priority_queue<int> pq;
    for(int i=0; i<k; i++)
    {
        pq.push(arr[i]);

    }

    
    while(k<n)
    {
       if(arr[k] <pq.top())
       {
           pq.pop();
           pq.push(arr[k]);
           k++;
       }
       else
       k++;
    }

    vector<int> ans;

    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}
