#include <iostream>
using namespace std;

/*
Node structure
Each node contains the link to the next node and some data variables.
*/

class node
{
public:
    int data;
    node* next; //type=node and points toward next node

    node(int val) { //constructor
        data = val;
        next = NULL;
    }
};

/*
Implementation
1. Make a node named head. This will act as the start of the linked list.

To insert at the end of the Linked List, iterate to the last node. In the below code
temp is the last node. So temp -> next = new node(val).
*/

void insertAtTail(node* &head, int val) //head is taken by reference = &head beacuse head is been modified
{
    node* n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) //if temp->next =NULL then it is last element
    {
        temp = temp->next;
    }
    temp->next = n;
}

/*
Inserting at the head
The next of the new node should be the old linked list (head). So the head will
now point to the new node because it now becomes the new head.
*/

void insertAthead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

/*
Printing a LinkedList
We pass the head of the node, and then keep on iterating till we do not reach the
end of the node.
*/

void display(node* head) //head is taken as value because it is not modified
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

/*Linear Search*/

bool search(node* head, int key)
{

    node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

/*
Deletion of a node
To delete a node having node->data = val
There are two cases:
1. We have to delete the node. In that case, we simply increment head.
2. Else, we search for the node having node->next->data == val. And then
delete it.
*/

void deleteAtHead(node* &head){

    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head, int val)
{
    //cheack if link list is null
    if(head==NULL){
        return;
    }
    //if iinklist have only one node
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while (temp->next->data != val) //traverse upto point that data = val
    {
        temp = temp->next; //temp->next node which is to be deleted
    }

    node* todelete = temp->next;
    temp->next = temp->next->next; //point temp->next towards temp->next->next

    delete todelete;
}

/*
Reverse a linked list [Interative Way]
Idea: We will keep three-pointers, for the previous, current, and next node.
Hint: We have to connect current->next to the previous node, and then
move to the next node.
*/

node* reverse(node* &head){

    node* prev=NULL;
    node* curr=head;
    node* next;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=next;
    }

    return prev;
}

/*
Reverse a linked list [Recursive Way]
Idea: We are at the head, recursively reverse the remaining list.
The (head->next) is the next node, this node should be the second last node
in the reversed list. head would be the last node in the reversed list, so its
next should be NULL. And then we will return the reversed list.
*/

node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){ //base case
        return head;
    }

    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

/*
K reverse[IMP]
Given a linked list and an integer K. Reverse the nodes of a linked list k at a time
and return its modified list. If the number of nodes is not a multiple of K then
left-out nodes, in the end, should remain as it is.
Idea: There are 2 cases:
1. The size of the linked list is less than K. In this case, return the list as it is.
2. The size of the linked list is more than K. Reverse the first K nodes and
recurse for the remaining list.
*/

node* reversek(node* &head, int k){

    node* prev=NULL;
    node* curr=head;
    node* next;

    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(next!=NULL){
        head->next = reversek(next,k);
    }
    return prev;
}

/*
Cycle Detection[IMP][without map]
Floyd’s cycle detection
Also know as hare and tortoise method, and slow and fast pointer method.
Idea: Slow and pointers are initially at the start. Slow takes one step. Fast takes
two-step at a time.
Time Complexity: O(n)
*/

void makeCycle(node* &head,int pos){

    node* temp=head;
    node* startNode;

    int count=1;
    while ((temp->next!=NULL))
    {
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
    
}

bool detectCycle(node* &head){

    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next; //moving one pointer
        fast=fast->next->next; //moving two pointer

        if(fast==slow){
            return 1;
        }
    }
    return 0;
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;

    } while (slow!=fast);

    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=NULL;
}

int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makeCycle(head,3);
    
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

    return 0;
}