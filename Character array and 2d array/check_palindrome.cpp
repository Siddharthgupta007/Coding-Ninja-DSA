bool checkPalindrome(char str[]) 
{
  int count = 0;
  for(int  i =0; str[i]!= '\0'; i++)
  {
    count++;
  }

    for(int  i=0; i<count; i++)
    {
      if(str[i]!=  str[count -i - 1])
      {
        return false;
        break;
      }

      else
      {
        
      }
    }

    return true;
     
}
