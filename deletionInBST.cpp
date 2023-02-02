#include<iostream>
#include<queue>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

//NLR
void preOrder(struct Node* root) {
    //base case
    if(root == NULL){
        return;
    }
    cout << root->data <<" "; //Node
    preOrder(root->left);     //Left
    preOrder(root->right);    //Right
}

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

//LRN
void postOrder(struct Node* root) {
    //base case
    if(root == NULL){
        return;
    }
    postOrder(root->left);       //Left
    postOrder(root->right);      //Right  
     cout << root->data <<" ";   //Root 

    
}

void levelOrderTraversal(Node*root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left) {
                q.push(temp->left);
            }

            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

Node* insertIntoBST(Node* root, int data) {
    //base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data) //insert in right part
    {
     root -> right = insertIntoBST(root -> right, data);
    }
    else  //insert in left part
    {
     root -> left = insertIntoBST(root->left,data);
    }

    return root;

}

//Function to find min value in BST
Node* minVal(Node*root){
    Node*temp = root;

    while(temp -> left != NULL){
        temp = temp->left;
    }
    return temp;
}


//Function to delete node from BST
Node* deleteFromBST(Node*root, int val) {
    //base case
    if(root == NULL)
    return root;

    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left child
        if(root->left != NULL && root->right == NULL){
            Node*temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            Node*temp = root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right) -> data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data > val){
        //search in left part
        root->left = deleteFromBST(root->left,val);
    }
    else{
        //go to right part
        root->right = deleteFromBST(root->right,val);
    }
}

//Function to take input 
void takeInput(Node* &root) {
     
     int data;
     cin >> data;

     while(data != -1) {
       root =  insertIntoBST(root,data);
        cin >> data;
     }
}

int main(){

    Node* root = NULL;
    cout << "Enter data for creating BST : " << endl;
    takeInput(root);
    
    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << "Printing BST in Preorder : " ;
    preOrder(root); 

    cout << endl;
    cout << "Printing BST in Inorder : ";
    inOrder(root); 

    cout << endl;
    cout << "Printing BST in Postorder : ";
    postOrder(root);

   
    //Deletion
    root = deleteFromBST(root,50);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout << "Printing BST in Preorder : " ;
    preOrder(root); 

    cout << endl;
    cout << "Printing BST in Inorder : ";
    inOrder(root); 

    cout << endl;
    cout << "Printing BST in Postorder : ";
    postOrder(root);
    

    
    return 0;
}
