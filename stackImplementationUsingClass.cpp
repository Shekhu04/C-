#include<iostream>
using namespace std;

class Stack{

    //Properties
    public:
    int *arr;
    int top;
    int size;

    //Behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size-top > 1) //atleast 1 space is available  
        {
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack s(5);

    s.push(8);
    s.push(10);
    s.push(9);
    s.push(8);
    s.push(10);
    s.push(9);
    cout << s.peek() << endl;

    s.pop();

    cout << s.peek() << endl;

    s.pop();
    s.pop();

    cout << s.peek() << endl;

    if(s.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }




return 0;
}
