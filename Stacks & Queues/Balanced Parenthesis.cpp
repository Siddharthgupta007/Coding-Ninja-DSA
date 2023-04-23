#include<stack>
#include<string.h>
using namespace std;

bool isBalanced(string expression) 
{
    // Write your code here
    int size = expression.length();

    stack<char> s;


    for(int i=0; i<size; )
    {
        if(s.empty() && expression[i] == ')' || expression[i] == ']' ||  expression[i] == '}' )
        return false;
      if (expression[i] == '(' || expression[i] == '[' ||
          expression[i] == '{') {
        s.push(expression[i]);
        i++;


      } 
      
      else  
      {
        if  (expression[i] == ')' || expression[i] == ']' ||  expression[i] == '}' && s.top() == expression[i] && !s.empty()) {
          s.pop();
          i++;
        }
        else
        {
            return false;
        }
      }
          
    }

        return s.empty();
      }
