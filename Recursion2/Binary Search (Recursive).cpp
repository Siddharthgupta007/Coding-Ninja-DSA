int helper(int input[], int x, int start, int end)
{
    //base case
    if(start> end)
    {
        return -1;
    }
        int mid = (start+end)/2;
        if(input[mid] == x)
        {
            return mid;
        }
        // recursive calls
        else if(input[mid]> x)
        {
            return helper(input, x, start, mid-1);
        }
        else 
        {
            return helper(input, x, mid+1, end);
        }
        
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
   
  
     return helper(input, element, 0, size-1);
    
}
