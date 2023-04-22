#include<string.h>
void removeConsecutiveDuplicates(char *input) 

{
   if(strlen(input) == 1)
   {
	   return ;
   }

   if (input[0] == input[1]) 
   {
     int i = 1;
     for (; input[i]!= '\0'; i++)
	 {
        input[i] = input[i+1];
	 }

	 removeConsecutiveDuplicates(input);

   }
   else

   removeConsecutiveDuplicates(input+1);
}
