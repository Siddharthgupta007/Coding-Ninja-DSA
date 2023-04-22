int sumOfDigits(int n) {
    // Write your code here
    if(n==0)
    {
        return 0;
    }
    if(n<10)
    {
        return n;
    }

    int sum  = (n%10) + sumOfDigits(n/10);

    return sum;

}


