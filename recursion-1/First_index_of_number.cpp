int firstIndex(int input[], int size, int x) {
 if(input[0]== x)
 {
   return 0;
 }

 if(size == 0)
 {
   return -1;
 }

 int ans = firstIndex(input+1, size-1, x);

 if(ans == -1)
 {
   return -1;
 }
 else
 {
   return ans +1;
 }
}
