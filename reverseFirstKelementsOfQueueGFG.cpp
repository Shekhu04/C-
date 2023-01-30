

// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    //algo
    //Step 1- pop first k elements from queue and put into stack
    stack<int>s;
    
    for(int i=0; i<k; i++){
        int val = q.front();
        q.pop();
        s.push(val);  
    }
    
    //step 2- fetch from stack and push in queue
    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    //step3- fetch first (n-k) element from queue and push_back
    int t = q.size() - k;
    
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
