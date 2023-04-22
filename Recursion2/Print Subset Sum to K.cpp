#include <iostream>
using namespace std;
void helper(int input[], int si, int size, int output[], int outputSize, int k){
    if(si==size){
        if(k==0){
            for(int i = 0; i < outputSize; i++){
                cout << output[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    int smallOutput[1001], smallSize = 0;
    helper(input, si + 1, size, output, outputSize, k);
    int i = 0;
    for(i = 0; i < outputSize; i++){
        smallOutput[i] = output[i];
    }
    smallOutput[i] = input[si];
    helper(input, si+1, size, smallOutput, outputSize + 1, k - input[si]);
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
 int temp[1000];
    helper(input, 0, size, temp, 0,  k);
}
// #include <iostream>
// using namespace std;
// void helper(int input[], int size, int k, int temp[], int elements)
// {
//     if(k==0)
//     {
//         for(int i=0 ;i<elements; i++)
//         {
//             cout<<temp[i]<<" ";
           
//         }
//         cout<<endl;
//         return ;

//     }

//     else{
//         return ;
//     }

//    helper(input, size, k , temp, elements);
//    temp [elements] = input[0];
//    helper(input+1, size-1, k- input[0] , temp,elements+1);
//    return ; 

// }
// void printSubsetSumToK(int input[], int size, int k) {
//     // Write your code here
//  int temp[size];
//  int elements =0;

//     helper(input, size, k ,temp, elements);

    
// }
