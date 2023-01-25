#include <bits/stdc++.h>
void solve(stack<int>&inputStack,int count,int size){
   //base case
   if(count == size/2)
   {
      inputStack.pop();  //deleting the middle element from stack
      return;
   }

   int num = inputStack.top(); //storing top element in num
   inputStack.pop(); //removing and storing top element in num

   //RECURSIVE CALL
   solve(inputStack, count+1 , size);
   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0; 
   solve(inputStack, count, N);  
   
}
