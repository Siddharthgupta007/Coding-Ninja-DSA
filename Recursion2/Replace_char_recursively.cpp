

void merge(int input[], int s, int e)
{
	int mid= (s+e)/2;
	 int len1= mid- s +1;
	 int len2 = e - mid;

	 int *first = new int[len1];
	 int *second = new int[len2];

	 int startingIndex= s;
	 for(int i=0 ; i<len1; i++)
	 {
		 first[i] = input[startingIndex];
		 startingIndex++;
	 }

	 startingIndex = mid+1;

	 for(int  i = 0; i<len2; i++)
	 {
		 second[i] = input[startingIndex];
		 startingIndex++;
	 }

	 // now, we have made 2 array which are sorted but now we have to save them in the main array to get the required output

	 int index1= 0;
	 int  index2 = 0;
	 startingIndex = s;

	 while(index1 < len1 && index2<len2 )
	 {
		 if(first[index1]< second[index2])
		 {
			 input[startingIndex] = first[index1];
			 startingIndex++;
			 index1++;
		 }

		 else
		 {
			 input[startingIndex ] = second[index2];
			 startingIndex++;
			 index2++;
		 }


	 }

	 while(index1<len1)
	 {
           input[startingIndex] = first[index1];
           startingIndex++;
           index1++;
         }

		 while(index2<len2)
		 {
                   input[startingIndex] = second[index2];
                   startingIndex++;
                   index2++;
                 }
}

void mergehelp(int input[], int start, int end)
{
	// 	
	
      
	if(start>= end)
	{
		return ;
	}
	
	int mid = (start+ end)/2;
	mergehelp(input, start, mid);
	mergehelp(input, mid+1, end);
	 
	 merge(input, start, end);
}

void mergeSort(int input[], int size)

{
	// making array for sorting storage
	
	
    int end = size-1;

	mergehelp(input, 0 , end);
	/*int start = 0;
	int end= size-1;
	int mid = (start+end) /2;
        // entering base case
        if(start>= end)
	{
		return ;
	}
	
	mergehelp(input, start, mid);
	mergehelp(input, mid+1, end);

	//merge case
	merge(input, start, end);
	*/


	
        
}
