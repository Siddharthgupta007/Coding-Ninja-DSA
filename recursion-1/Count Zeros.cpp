
int countZeros(int n) {
    // for case n == 0
 if(n==0)
 {
     return 1;

 }
// for actual base case
 if(n<10)
 {
     return 0;
 }
    
    if(n%10 == 0)
    {
        return 1 + countZeros(n/10);
    }
    else
    return countZeros(n/10);

}


