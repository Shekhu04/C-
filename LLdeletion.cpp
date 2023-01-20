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

    //Destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl;
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

void deleteNode(int position, Node* &head) {

    //deleting first node
    if(position == 1 ) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;  //deleting this value
        delete temp;
    }

    else
    {
        //deleting any middle node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }


        //deleting last node
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;


    }
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
    insertAtPosition(head, tail, 5 , 8);
    insertAtPosition(head, tail, 6 , 16);
    deleteNode(3, head);
    print(head);


    return 0;
}
