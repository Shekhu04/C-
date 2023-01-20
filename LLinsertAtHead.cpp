 #include<iostream>
 using namespace std;

 class Node{

    public:
    int data;
    Node * next; 

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
 };

 void insertAtHead(Node* &head,int d){  /*taking reference such that no copy is created
                                         and changes take place in the original linked list*/
    
    Node* temp = new Node(d); //Creation of new node
    temp -> next = head; //insertion at head
    head = temp;
 }

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

    //Created a new node

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
   

    //head pointed to node1
    Node* head = node1;
    Node * tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);
    
    //tail pointed to node1 
    
    insertAtTail(tail,15);
    print(head);


    return 0;
 }
