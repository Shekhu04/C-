#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

//traversing the linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout<<endl;
    
}

//get length of linked list
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//insertion at head
void insertAtHead(Node* &head , int d){
    Node* temp  = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;

}

//insertion at tail
void insertAtTail(Node* &tail, int d){
    Node*temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//insert at position

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
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    //print(head);
    //cout << getLength(head) << endl;
   
    insertAtHead(head , 7);
    insertAtHead(head , 6);
    print(head);
    insertAtTail(tail,9);
    print(head);
    insertAtPosition(head , tail, 2, 9 );
    print(head);


    return 0 ;
}
