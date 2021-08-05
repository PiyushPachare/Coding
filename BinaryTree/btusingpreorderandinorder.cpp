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

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx = 0;

    if(start > end){//base condition
        return NULL;
    }
    int curr = preorder[idx]; //storing preorder 1st element i.e root
    idx++;
    Node* node = new Node(curr);

    if(start==end){ //condition when ther is only one element 
        return node;
    }

    int pos = search(inorder,start,end,curr); //search curr value in inorder
    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end);

    return node;
}

void inorderprint(Node* root){

    if(root==NULL){
        return;
    }

    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){

    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    //buildtree
    Node* root = buildTree(preorder,inorder,0,4);
    inorderprint(root);

    return 0;
}