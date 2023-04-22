int staircase(int n){
   
   if(n == 0)
   {
       return 1;
   }
   else if(n<0)
   {
       return 0; 
   }
   else{
     int smalloutput = staircase(n -3) + staircase(n-2)+ staircase(n-1);
     return smalloutput;

    
   }

  


    
}
