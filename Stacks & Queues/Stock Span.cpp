#include<stack>
int* stockSpan(int *price, int size)  {
	// Write your code here

	stack<int> stack;

	int *output = new int[size];

	for(int i=0; i<size; i++)
	{
		while(!stack.empty() && price[stack.top()]< price[i])
		{
			stack.pop();
		}

                if (stack.empty() == 1) {
                  output[i] = i + 1;
                } 
				
				else 
				{
                  output[i] = i - stack.top();
                }
           stack.push(i);
    }

		return output;
}
