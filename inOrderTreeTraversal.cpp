#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node*right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//LNR
void inOrder(struct Node* root ) {
    //base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);       //Left
    cout << root->data <<" ";  //Root
    inOrder(root->right);      //Right   
}

int main(){
    
    struct Node*root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    /*
              1
            /   \
           2     3
          / \   /  \
         4   5 6    7
    
    */
   inOrder(root);

   return 0;
}
