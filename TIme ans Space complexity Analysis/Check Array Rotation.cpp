int arrayRotateCheck(int *input, int size)
{
    //Wite your code here
    int count=1;

    for(int i=0; i<size; i++)
    {
       if(input[i+1]>=input[i])
       count++;
       else{
           break;
       }
    }

     if(size ==0)
     return 0;
    else if(count == size)
    {
        return 0;
    }
    else
    {
        return count;
    }
}
