#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node * next;

    //Constructor
    Node(int d) {
        this -> data = d;
        this -> next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl; 
    }

};

void insertNode(Node* &tail, int element, int d){

    //Empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else{
        //Non-empty list
        //Assuming that the element is present in the list

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void deleteNode(Node* &tail, int value) {

    //Empty list 
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }

    //Non empty list
    else {

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev =curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //Single Node linked list
        if(curr == prev){
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

//Traversing circular linked list
void print(Node* tail) {

    Node* temp = tail;

    //Empty list
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    }
    while(tail != temp);
    cout << endl;

}

int main (){

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    deleteNode(tail, 3);
    print(tail);



    return 0;

}
