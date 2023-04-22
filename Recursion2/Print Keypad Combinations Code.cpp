#include <iostream>
#include <string>
#include<string.h>
using namespace std;


string smallstring(int num) {
  if (num == 0 || num == 1) {
    return "";
  } else if (num == 2) {
    return "abc";
  }

  else if (num == 3) {
    return "def";
  }

  else if (num == 4) {
    return "ghi";
  } else if (num == 5)
    return "jkl";
  else if (num == 6) {
    return "mno";
  } else if (num == 7)
    return "pqrs";
  else if (num == 8)
    return "tuv";
  else if (num == 9) {
    return "wxyz";
  }
  return "";
}
void printkey(int num,string help)
{
   if(num == 0)
   {
       cout<<help<<endl;
      return ;
   }

   string small = smallstring(num%10);
   for(int i=0; i<small.length(); i++)
   {
       printkey(num/10, small[i]+help);
      
   }
}
void printKeypad(int num)
{
   
   
    char input[5000];

    printkey(num,input );
    
  

}
