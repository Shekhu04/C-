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

//Recursive Solution

void reverse(Node* &head, Node* curr, Node* prev){

    

    //Base case
    if(curr == NULL) {
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head,forward,curr);
    curr -> next = prev;
}
Node* reverseLinkedList(Node *head)
{
    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;

    //Iterative Solution

   /*//Empty or single node linked list
   if(head == NULL || head -> next == NULL){
	   return head;
   }

   Node* prev = NULL;
   Node* curr = head;
   while(curr != NULL){
	   Node* forward = curr -> next;
	   curr -> next = prev;
	   prev = curr;
	   curr = forward;
   }
   return prev;*/
}

