#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
    size = n;
    arr = new int[size];
    front = -1;
    rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        //check full or not
        if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))) 
        {
            return false;
        }

        else if (front == -1) //first element
        {
            front = rear = 0;
        }

        else if (front == 0 && rear != size-1) //to maintain cyclic nature
        {
            front = size-1;
        }

        else
        {
            front--; //opposite of queue
        }
        arr[front] = x;
        return true;
        
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        //to check full or not
         if( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1)) ) 
        {
            return false;
        }
        else if(front == -1) //insert first element
        {
            front = rear = 0;   
        }
        else if(rear == size-1 && front != 0)  //to maintain cyclic nature
                                               //if rear is at end then take it to starting
        {
            rear = 0;
        }
        else //normal case
        {
            rear++;
        }
        arr[rear] =x;
        return true;   
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
         if(front == -1) //queue is empty
         {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) //single element
        {
            front = rear = -1;
        }

        else if (front == size-1) //to maintain cyclic nature
        {
            front = 0;
        }

        else   //normal case
        {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if(front == -1) //to check deque is empty or not
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear) //single element
        {
            front = rear = -1;
        }
        else if(rear == 0)
        {
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty())
        {
            return -1;
        }
        else{
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(isEmpty())
        {
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front == -1)
        return true;
        else
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((front == 0) && (rear == size-1) || (front != 0 && rear == (front-1)%(size-1)))
        {
            return true;
        }
        else
        return false;
    }
};
