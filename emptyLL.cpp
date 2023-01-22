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
void insertAtHead(Node* &head , Node* &tail, int value){
    
    //Empty list
    if(head == NULL) { 
        Node * temp = new Node(value);
        head = temp;
        tail = temp; 
    }
    else{
    Node* temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }

}

//insertion at tail
void insertAtTail( Node* &head,Node* &tail, int value){
    
    if(tail == NULL){
         Node * temp = new Node(value);
         head = temp;
        tail = temp; 
    }
    else{
    Node*temp = new Node(value);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

}
    

//insert at position

void insertAtPosition( Node* &head, Node* &tail,int position, int value){

    //insert at start
    if(position == 1){
        insertAtHead(head,tail,value);
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
        insertAtTail( head,tail, value);
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

   
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
   
   
    insertAtHead(head ,tail, 7);
    print(head);
    
    insertAtHead(head , tail, 6);
    print(head);
   
    insertAtTail(head,tail,9);
    print(head);
    
   
    insertAtPosition(head , tail, 2, 9 );
    print(head);
     
    return 0 ;
}
