void heapSort(int arr[], int n) {
    // Write your code
    for(int i=0; i<n; i++)
    {
        int childindex = i;

        while(childindex>0)
        {
            int parentIndex = (childindex-1)/2;

            if(arr[childindex]<arr[parentIndex])
            {
                int temp = arr[childindex];
                arr[childindex] = arr[parentIndex];
                arr[parentIndex] = temp;
            }
            else{
                break;
            }

            childindex = parentIndex;
        }
    }

    int size = n;
  while(size>1)
  {
    int temp = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;
    size--;

    int ParentIndex = 0;
    int leftchildIndex = (2*ParentIndex)+1;
    int rightchildIndex = (2*ParentIndex)+2;

    while(leftchildIndex<size)
    {
        int minIndex = ParentIndex;

        if(arr[minIndex] > arr[leftchildIndex]) 
        minIndex = leftchildIndex;
        if(rightchildIndex<size && arr[rightchildIndex]<arr[minIndex])
        {
            minIndex = rightchildIndex;
        }

        if (minIndex == ParentIndex) {
          break;
        }

        int temp = arr[ParentIndex];
        arr[ParentIndex] = arr[minIndex];
        arr[minIndex] = temp;

        ParentIndex = minIndex;

        leftchildIndex = (2 * ParentIndex) + 1;
        rightchildIndex = (2 * ParentIndex) + 2;
    }
  }
}
