/*
1. Level order traversal
2. Find Sum of Values at kth level of Binary Tree
3. Count Number of Nodes
4. Sum of all nodes in Binary Tree
*/

#include<iostream>
#include<queue>
using namespace std;

struct  Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left=NULL;
        right=NULL;
    }
};

void printLevelOrder(Node *root){

    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<" ";
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
}

/*Find Sum of Values at kth level of Binary Tree */
int sumAtK(Node* root,int k){
    if(root == NULL){
        return -1;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum=0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(node != NULL){
            if(level == k){
                sum += node->data;
            }
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }

    return sum;
}

/*Count Number of Nodes*/
int countNodes(Node* root){

    if(root == NULL){
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
}

/*Sum of all nodes in Binary Tree*/
int sumofallnodes(Node* root){

    if(root==NULL){
        return 0;
    }

    return sumofallnodes(root->left) + sumofallnodes(root->right) + root->data;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //Level order traversal
    //printLevelOrder(root);   

    //sumAtK
    //cout<<sumAtK(root,1);

    //Count Nodes
    //cout<<countNodes(root);

    //sumofallnodes
    cout<<sumofallnodes(root);
}
