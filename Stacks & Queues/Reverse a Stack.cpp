void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here

    if(input.size() == 1)
    return ;

    if(input.empty() ==1 )
    {
        return; 
    }

    int temp = input.top();

    input.pop();
    
    reverseStack(input, extra);

    while(input.empty() !=1)
    {
        extra.push(input.top());
        input.pop();
    }

    input.push(temp);
    while(extra.empty() != 1 )
    {
        input.push(extra.top());
        extra.pop();
    }

}
