
int partician( int input[], int start, int end)
{
	int count=0;
	int k = start+1;
        for (; k <= end; k++) {
          if (input[start] >= input[k])
            count++;
        }
    
	int temp = input[start + count];
	input[start+count]  = input[start];
	input[start] = temp;

	int i  = start;
	int j= end;

	for(; i<start+count && j> start+count; )
	{
		if(input[i] <= input[start+count])
		{
			i++;
		} 

		else if(input[j]>  input[start+count])
		{
			j--;
		}

		else
		{
			int temp = input[i];
			input[i] = input[j];
			input[j] = temp;
			i++;
			j--;
		}
	}

	return start+count;


}
void qshelp(int input[], int start, int end)
{
	//base case
	if(start>= end)
	{
		return ;
	}

	int c = partician(input, start, end);
	qshelp(input, start, c-1);
	qshelp(input, c+1, end);
}

void quickSort(int input[], int size) {
 
 qshelp(input, 0 , size-1);
}
