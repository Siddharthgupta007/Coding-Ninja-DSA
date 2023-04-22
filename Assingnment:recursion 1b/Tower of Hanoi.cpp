using namespace std;
#include <iostream>
void towerOfHanoi(int n, char source, char auxiliary, char destination) 
{
    // Write your code here

    // base case 
    if( n <= 1)
    {
        cout<<source<<" "<< destination<<endl;
       return ;
    }

    towerOfHanoi(n-1, auxiliary, destination, source);
    cout<<source<<" "<<destination<<endl;

    towerOfHanoi(n-1,  auxiliary, source, destination);



   

}
