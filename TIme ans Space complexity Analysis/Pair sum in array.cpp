#include <bits/stdc++.h>
int pairSum(int *arr, int n, int num)
{
	sort(arr, arr+n);
	int count=0;

	int i=0,j=n-1;
	int repeat=0;
   
   while(i<j)
	{
		
         if(arr[i] + arr[j] < num)
		{
			
			i++;
		}

		else if(arr[i] + arr[j]>num)
		j--;

		else
		{
			int st=arr[i];
            int end=arr[j];

            if(st==end)
            {
                int total=(j-i)+1;
                count +=(total*(total-1))/2;
                return count;
            }
            int tempst=i+1;
			int tempend=j-1;

			while(tempst<=tempend && arr[tempst]==st)
			  tempst+=1;
			while(tempst<=tempend && arr[tempend]==end)
			  tempend -= 1;  

			 int totalelementfromstart= (tempst-i);
			 int totalelementfromend= (j-tempend);

			 count += (totalelementfromstart*totalelementfromend);
			 i=tempst;
			 j=tempend; 
		}
	}

	return count;
}
