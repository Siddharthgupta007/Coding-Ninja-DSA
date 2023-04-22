int pairSum(int *arr, int start, int end, int target)
{
	int finalcount=0;
	while(start<end)
	{
		if(arr[start]+ arr[end]>target)
		{
			end--;
		}
		else if(arr[start]+ arr[end]<target)
		{
			start++;
		}

		else
		{
			int startindex= start;
			int endindex= end;
                        if (arr[start] == arr[end]) {
                          int bi = end - start + 1;
                          finalcount = finalcount + (bi * (bi - 1)) / 2;
                          return finalcount;
                        }

				int newstart= start+1;
		int newend= end-1;

		while(newstart<=newend && arr[newstart] == arr[start])
		newstart++;
		while(newstart<=newend && arr[newend] == arr[end])
		newend--;

		int elefromstart= newstart-start;
		int elefromend= end - newend;
		finalcount += (elefromend*elefromstart);
		start= newstart;
		end= newend;
                }

		

	}
	return finalcount;
}

int tripletSum(int *arr, int n, int num)
{
 if(n==0)
 {
	 return 0;
	
 }

 sort(arr,arr+n);
 int finalcount=0;
 for(int i=0 ; i<n; i++)
 {
	 int pairsum= num-arr[i];
	 finalcount = finalcount+ pairSum(arr, i+1, n-1, pairsum);
 }
 return finalcount;
}
