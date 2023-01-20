#include<iostream>
using namespace std;

//Implementation
class Node {

    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

   
};

int main(){

    Node* node1 = new Node(45);
    cout << node1 ->  data << endl;
    cout << node1 -> next << endl;

    return 0;
}
