using namespace std;
#include<iostream>
void print(int n){
    //write your code here

    if(n>1)
    {
        //recursive call
        print(n-1);
        
    }
    //for base case

    cout << n << " ";
}
