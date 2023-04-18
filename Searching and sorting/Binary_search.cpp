int binarySearch(int *input, int n, int val) {
  int start = 0;
  int end = n - 1;

  int middle = (start + end) / 2;

  int i =0;
  while(i<n)
  {

  if (input[middle] == val)
  {
      return middle;
  }

  else
  {
    if(val > input[middle])
    {
        start = middle + 1;
        middle = (start + end) / 2;
    }

    else 
    {
      end = middle - 1;
      middle = (start + end) / 2;
    }
  }
  i++;
  }

  return -1;
  
}
