#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    //Constructor
    Node(int data){
    this -> data = data;
    this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int value){
    Node * temp = new Node(value);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int value){
    Node * temp = new Node(value);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition( Node* &head, Node* &tail,int position, int value){

    //insert at start
    if(position == 1){
        insertAtHead(head, value);
        return;
    }

    Node* temp = head;
    int cnt = 1;  //starting from 1st position

    while(cnt < position-1){
        temp = temp->next; //temp ko aage bdhate jao
        cnt++;
    }

    //insert at end
    if(temp -> next == NULL){
        insertAtTail(tail, value);
        return;
    }

    //Creating a new node for value
    Node* nodeToInsert = new Node(value);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtTail(tail,3);

    print(head);
    insertAtPosition(head, tail, 5 , 8);

    print(head);


    return 0;
}

