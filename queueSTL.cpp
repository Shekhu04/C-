#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q; //creating a queue

    q.push(2);
    q.push(3);
    q.push(7);
    q.push(6);
    cout << "Size of queue is : " << q.size() << endl;
    cout << "Front of queue is : " << q.front() << endl;
    cout << "Last element of queue is : " << q.back() << endl;

    q.pop();
    cout << "Front of queue is : " << q.front() << endl;

    if(q.empty()) {
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }

    return 0;

}
