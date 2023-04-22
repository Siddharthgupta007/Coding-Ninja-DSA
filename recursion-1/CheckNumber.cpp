bool checkNumber(int input[], int size, int x) {
 

 if(input[size] == x && size>=1 )
 return true;
 
 if(size == 0)
 {
   return false;
 }
 
 

 return checkNumber(input, size-1, x);

}
