#include <bits/stdc++.h> 
void sortedInsert(stack<int> &stack , int num)
{
	//base case
	if(stack.empty() || (!stack.empty() && stack.top() < num) )  //if stack is empty then insert element directly and 
		                                                    //if element at top of stack is less than the number then insert element at top of the stack
	{
		stack.push(num);  //insert number
		return;
	}

	int n = stack.top();  
	stack.pop();        //storing and removing top element of stack in n

	//recursive call
	sortedInsert(stack,num);

	stack.push(n);  //inserting n in sorted manner
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	//base case
	if(stack.empty())  
	return;

	int num = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedInsert(stack,num);
}
