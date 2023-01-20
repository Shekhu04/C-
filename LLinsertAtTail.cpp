#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

//Insertion At Tail

void insertAtTail(Node* &tail , int value) {

    Node * temp = new Node(value); //Creation of new node
    tail -> next = temp; 
    tail = temp;
}

 void print(Node* &head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
 }

int main(){

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,12);
    insertAtTail(tail,13);
    insertAtTail(tail,14);
    print(head);

    return 0;



}
