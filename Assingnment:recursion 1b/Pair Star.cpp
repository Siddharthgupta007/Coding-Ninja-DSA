// Change in the given string itself. So no need to return or print the changed string.
#include<string.h>

// void shift(char input[], int size)
// {
//     int lastindex = size-1;
//     size = size +1;
//     int i = 0;
//      while (lastindex - i >= 0) 
//      {
//       input[lastindex] = input[lastindex - 1-i];
//       i++;
//     }
// }

// void help(char input[], int size)
// {
//     // base case is 
//     if(size <= 1)
//     {
//         return ;
//     }

//     help(input + 1, size);

//     if(input[0] == input[ 1])
//     {
//         shift(input, size);
//         input[1] = '*';
//     }
   
// }

void pairStar(char input[])
{
    if (input[0] == '\0' || input[1] == '\0') return;
    if (input[0]==input[1]) {
      int len = strlen(input) ;
     
      int i = len;
      while (i >=1) {
        input[i+1]=input[i];
        i--;
      }
      input[1] = '*';
     pairStar(input+2);
    }
    pairStar(input + 1);
}
