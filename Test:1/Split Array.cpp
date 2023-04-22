bool check(int *input, int size,int n, int l , int r)
{
  if (n == size) {
    return l == r;
  }

  if(input[0] %3 == 0 && input[0] %5 != 0)
  {
      l= l+input[0];
  } 
  else if (input[0]%5== 0) 
  {
    r = r + input[0];
  } 
  else
  {
    return check(input + 1, size, n + 1, l + input[0], r) ||  check(input + 1, size, n + 1, l, r + input[0]);
  }
return check(input + 1, size, n + 1, l, r);
}

bool splitArray(int *input, int size) {
  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
   */
  return check(input, size, 0, 0, 0);
}
