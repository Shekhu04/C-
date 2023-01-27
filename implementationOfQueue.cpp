#include <bits/stdc++.h> 
class Queue {
    int * arr;
    int size;
    int qfront;
    int rear;

public:
    Queue() {
        // Implement the Constructor
        size = 100000;
        arr = new int[size];
        qfront = 0;   //at starting both front and rear will be at 0 index
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if (qfront == rear)  //if front and rear are equal then the queue must be empty
        {
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if (rear == size) //if rear is equal to the size of queue then the queue is full 
        {
            cout << "Queue is Full" << endl;
        }
        else{
            arr[rear] = data; //insert data at rear
            rear++;  //move rear to next location
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront == rear) //queue is empty no element can be deleted
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear) //so that no memory is wasted
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if (qfront == rear) // empty
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }

    }
};
