#include<math.h>
double geometricSum(int k) {
    // Write your code here
    if(k==0)
    {
        return 1;
    }

    double ans = 1/(double)pow(2,k) + geometricSum(k-1);

    return ans;


    

}


