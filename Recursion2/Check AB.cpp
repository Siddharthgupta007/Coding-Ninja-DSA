#include<string.h>
#include<iostream>
using namespace std;
bool helper(char *input);
bool checkAB(char input[]) {
	// Write your code here
    
	if(input[0] != 'a')
	{
		return false;
	}
	else return helper(input);
}
bool helper(char *input)
{
	if(input[0]=='a'&&input[1]=='\0') return true;
	else if(input[0]=='a' && (input[1]=='a'||input[1]=='b' && input[2]=='b' ))
	helper(input+1);
	else if(input[0]=='b' && input[1]=='b' && input[2]=='\0')
	return true;
	else if(input[0]=='b' && input[1]=='b' && input[2]=='a')
	helper(input+2);
	else return false;

    //     checkAB(input + 1);

    //     if(input[0] == 'a')
	// {
	// 	if(input[1] == 'a' || input[1] == '\0')
	// 	{
	// 		return true;
	// 	}
	// 	else if(input[1] == 'b')
	// 	{
	// 		if(input[2] == 'b')
	// 		{
    //                       if (input[3] == 'a' || input[3] == '\0') {
    //                         return true;
    //                       }
	// 					  else
	// 					  return false;
    //                     }

    //             }
	// 	else
	// 	{
	// 		return false;
	// 	}
	// }
	
	// return false;

	

}



