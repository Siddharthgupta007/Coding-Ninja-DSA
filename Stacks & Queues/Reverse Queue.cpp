#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
	if(input.size() == 1)
	{
		return ;
	}
	if(input.empty() == 1)
	return ; 

	int temp = input.front();
	input.pop();

	reverseQueue(input);
	input.push(temp);
}
