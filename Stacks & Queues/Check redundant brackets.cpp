#include<stack>

bool checkRedundantBrackets(string expression) {
  // Write your code here
stack<char> s;

for(int i=0 ; i<expression.size(); i++)
{
  if(expression[i] == '(')
  {
    s.push(expression[i]);
  }
  else if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/' )
  {
    s.push(expression[i]);
  }
  else if(expression[i] == ')')
  {
    if(s.top() == '(')
    return true;
    while(s.top() != '(')
    {
      s.pop();
    }
    s.pop();
  }
  
}

return false;
}
