#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left=NULL;
        right=NULL;
    }
};

//Time COmplexity = O(n), n=no. of node

void rightview(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        int n=q.size(); //no of node on current level
        for(int i=0;i<n;i++){
            Node* curr = q.front();
            q.pop();

            if(i==n-1){
                cout<<curr->data<<" ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

void leftview(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        int n=q.size(); //no of node on current level
        for(int i=1;i<=n;i++){
            Node* curr = q.front();
            q.pop();

            if(i==1){
                cout<<curr->data<<" ";
            }

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //right view
    rightview(root);
    cout<<endl;
    //left view
    leftview(root);

    return 0;
}