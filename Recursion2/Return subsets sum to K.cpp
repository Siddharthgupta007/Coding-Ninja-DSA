/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

DonÃÂ¢ÃÂÃÂt print the subsets, just save them in output.
***/

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
	if(k < 0) return 0;
    if(n == 0) {
        if(k == 0) {
            output[0][0] = 0;
            return 1;
        }
        else 
            return 0;
    }
    
	int a = subsetSumToK(input+1,n-1,output,k);
    int tempOut[10000][50];
    int b = subsetSumToK(input+1,n-1,tempOut, k - input[0]);
   
    for(int i=0; i<b; i++) {        
		output[a+i][0] = tempOut[i][0]+1;
        output[a+i][1] = input[0];
        for(int j=1; j<=tempOut[i][0]; j++)
            output[a+i][j+1] = tempOut[i][j];
    }
    return a+b;
}
