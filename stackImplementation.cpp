#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation of stack
    stack <int> s;

    //Inserting element in stack
    s.push(4);
    s.push(7);

    //deleting element from stack
    s.pop();

    cout<< "Printing top element : " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << " Stack is not empty" << endl;
    }

    return 0;
}
