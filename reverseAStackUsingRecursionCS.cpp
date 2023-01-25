void insertAtBottom(stack<int> &s , int x) //making a function
{

    //base case
    if(s.empty()) //checking till stack is empty
    {
        s.push(x); //inserting x when stack is empty
        return;
    }

    int num = s.top(); //storing top element in num
    s.pop();  //removing top element

    //recursive call
    insertAtBottom(s,x);

    s.push(num); //inserting top element
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    //base case
    if(stack.empty())
    return;

    int num = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom(stack,num);
}
