#include<iostream>
using namespace std;

//Node Structure

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }

};

void insertAtTail(node* &head,int val){
    node* n = new node(val);

    if(head == NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void evenAfterOdd(node* &head){

    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }

    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}

int main(){

    node* head=NULL;
    int arr1[]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        insertAtTail(head,arr1[i]);
    }
    display(head);
    evenAfterOdd(head);
    display(head);
    
}