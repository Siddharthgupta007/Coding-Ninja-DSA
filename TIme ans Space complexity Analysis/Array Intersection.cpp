#include <bits/stdc++.h>
void intersection(int *arr1, int *arr2, int n, int m) 
{

  sort(arr1, arr1 + n);
  sort(arr2, arr2 + m);

  // lopp for iteration
  for(int i=0,j=0; i<n && j<m; )
  {
     // if equal
     if(arr1[i] == arr2[j])
     {
       cout<<arr1[i]<<" ";
       i++;
       j++;
     }

     else if(arr1[i] <= arr2[j])
     {
       i++;
     }

     else
     {
       j++;
     }
  }
}
