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

Node* reverseLinkedList(Node *head)
{
   //Empty or single node linked list
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
   return prev;
}

