
void reversearray(int *input, int start, int end)
{
    for(int i=start,j=end; i<j; i++,j--)
    {
        int temp=input[i];
        input[i] = input[j];
        input[j]= temp;
    }
}
void rotate(int *input, int d, int n)
{
   //reverse aray
   reversearray(input, 0, d - 1);
    reversearray(input, d, n - 1);
    reversearray(input, 0, n - 1);
}
