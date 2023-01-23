#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
Node* getMiddle(Node* head) {

    //Single node
    if(head == NULL || head -> next == NULL)
    return head;

    //2 nodes
    if(head->next->next == NULL){
        return head-> next;
    }

    Node *slow = head;
    Node *fast = head-> next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;
    }
    return slow;
}


Node *findMiddle(Node *head) {
    return getMiddle(head);

}
