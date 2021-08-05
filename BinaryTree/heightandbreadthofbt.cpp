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

//Time Complexity = O(n) where n is no. of node

int calcHeight(Node* root){

    if(root == NULL){
        return 0;
    }

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight,rHeight) + 1;
}

//Time Complexity = O(n^2) where n is no. of node
int calcDiameter(Node* root){

    if(root == NULL){
        return 0;
    }

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight +1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter,max(lDiameter,rDiameter));
}

//Time Complexity = O(n) as we are not calling height function
int calcDiameteroptimize(Node* root,int* height){

    if(root==NULL){
        *height=0;
        return 0;
    }

    int lh=0,rh=0;
    int lDiameter = calcDiameteroptimize(root->left, &lh);
    int rDiameter = calcDiameteroptimize(root->right,&rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh,rh) + 1; //curr height

    return max(currDiameter,max(lDiameter,rDiameter));
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //Height of Binary tree
    cout<<calcHeight(root)<<endl;
    cout<<calcDiameter(root)<<endl; 

    int height=0;
    cout<<calcDiameteroptimize(root,&height);
}
