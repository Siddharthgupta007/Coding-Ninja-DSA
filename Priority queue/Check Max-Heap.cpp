#include<queue>

bool isMaxHeap(int arr[], int n) 
{
    // Write your code here
    int parentindex = 0;
    int leftchildindex = (parentindex*2)+1;
    int rightchildindex  = (parentindex*2)+2;

    if(arr[leftchildindex] !=NULL && arr[rightchildindex] != NULL)
    {
        if(arr[parentindex]>arr[leftchildindex] && arr[parentindex] >arr[rightchildindex])
        {
            return isMaxHeap(arr+1, n-1);
        }
        else{
            return false;
        }
    } 
    else
    return true;
}
