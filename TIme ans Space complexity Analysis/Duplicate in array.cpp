int findDuplicate(int *arr, int n)
{
    
    int sum =0;
    for(int i =0; i<n ; i++)
    {
        sum = sum + arr[i];
    }

    int sum2 = ((n-2)*(n-1))/2;

    return sum - ((n - 2) * (n - 1)) / 2;
}
