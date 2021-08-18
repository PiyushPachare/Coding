#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

void flatten(Node* root){

    //base case
    if(root == NULL || (root->left == NULL && root->right==NULL)){
        return;
    }

    if(root->left !=NULL){
        flatten(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right; //calculate tail
        while(t->right !=NULL){ //finding root right tail
            t=t->right;
        }

        t->right=temp; //put right at tail of root->right(which was first root left)
    }

    flatten(root->right);
}

void inorder(struct Node* root){

    /*
        left
        root
        right
    */

   if(root==NULL){
       return;
   }

   inorder(root->left);
   cout<<root->data<<"->";
   inorder(root->right);
}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    inorder(root);
    cout<<endl;
    flatten(root);
    inorder(root);

    return 0;
}