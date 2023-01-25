#include <bits/stdc++.h>
void solve(stack<int> &s , int x) //making a function
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
    solve(s,x);

    s.push(num); //inserting top element
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}
