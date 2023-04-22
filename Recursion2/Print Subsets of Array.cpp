#include <iostream>
#include <string.h>
using namespace std;

#include <iostream>
using namespace std;

void helper(int input[], int size, int elements, int temp[])
{
  if(size == 0)
  {
    for(int i =0; i<elements; i++)
    {
      cout<<temp[i]<<" ";
    }
    cout<<endl;
    return ;
  }
//not including
  helper(input+1, size-1, elements, temp );
  // including
  temp[elements] = input[0];
  helper(input+1, size-1,elements+1, temp );
  return;
  

}

void printSubsetsOfArray(int input[], int size)
{
  int temp[size];
  
  int elements = 0;
  helper(input, size, elements, temp);
}

    /*void helper(string ip, string output) {
      if (ip.length() == 0) {
        cout << output <<" ";
        return;
      }
      string op1;
      string op2;
      op2.push_back(ip[0]);
      ip.erase(ip.begin() + 0);

      helper(ip, op1);
      helper(ip, op2);
      return;
    }
    void printSubsetsOfArray(int input[], int size) {
      string output;
      string ip;
      for (int i = 0; i < size; i++) {
        ip[i] = output[i];
      }
      helper(ip, output);
    }
    */
