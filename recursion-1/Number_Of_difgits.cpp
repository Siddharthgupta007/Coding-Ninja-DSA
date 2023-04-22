int count(int n){
    //write your code here

    if(n==0)
    {
        return 0;

    }
    int digit = n %10;
    int small = count(n/10);
    int ans = small + 1;
    return ans;
}
