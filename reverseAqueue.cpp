

//function Template for C++

//Function to reverse the queue.
//using stack
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;  //taking a stack
    while(!q.empty()) {
        
        int element = q.front();  
        q.pop();  //removing front element of queue
        s.push(element); //inserting front element of queue in stack
    }
    
    while(!s.empty()) {
        
        int element = s.top();
        s.pop(); //removing top element of stack
        q.push(element); //inserting top element of stack in queue
    }
   return q;
}
