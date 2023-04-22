#include <string.h>

int helper(char input[], int size)
{
  //base case
   if(size <1)
  {
   
    return 0;
    
  } 
  //small calculation
  int lastval = input[size-1];
  lastval  = lastval - 48;
  // recusive call
  int ans = (helper(input, size-1)*10) + lastval;
}
int stringToNumber(char input[]) 
{
  // base case
  int real_ans = helper(input , strlen(input));

  return real_ans;



}


