#include<iostream>
#include<queue>
using namespace std;

int main() {

    deque<int> d;

    d.push_front(12);
    d.push_back(8);
    d.push_front(6);

    d.pop_back();
   
   
    cout << d.front() << endl;
    cout << d.back() << endl;

    return 0;
}
