#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBracketReversals(string input)
{
    if (input.size() % 2 != 0)
    {
        return -1;
    }
    stack<char> s;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '{')
        {
            s.push(input[i]);
        }
        else
        {
            if (s.empty())
            {
                s.push(input[i]);
            }
            else if (s.top() == '{')
            {
                s.pop();
            }
            else if (s.top() == '}')
            {
                s.push(input[i]);
            }
        }
    }
    int count = 0;
    while (!s.empty())
    {
        char c1 = s.top();
        s.pop();
        char c2 = s.top();
        s.pop();
        if (c1 == c2)
        {
            count++;
        }
        else if (c1 == '{' && c2 == '}')
        {
            count += 2;
        }
    }

    return count;
}

/*
#include<stack>
int countBracketReversals(string input) 
{
  stack<char> s;
  
  if (input.size() % 2 != 0)
    {
        return -1;
    }

 for(int i=0 ; i<input.size() ; i++)
 {
   if (input[i] == '{') 
   {
     s.push(input[i]);
   }

   else 
   {
     if (s.top() == input[i]) {
       s.pop();
     } else if (s.empty() || s.top() == '}') {
       s.push(input[i]);
     }
   }
 }

 char c1,c2;
 int count=0;

 while(!s.empty())
 {
    c1 = s.top();
    s.pop();
    c2 = s.top();
    s.pop();

    if (c1 == c2) {
      count++;
    }

    else if (c1 == '{' && c2 == '}')
      count = count + 2;

    
 }
  return count;
}
  // Write your code h
  */
