#include<iostream>
using namespace std;

#define n 20

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int [n]; //allocating memory to arr
        front=-1;
        back=-1;
    }

    void push(int x){

        if(back==n-1){ //check for overflow
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front == -1){ //pointing front to first element
            front++;
        }
    }

    void pop(){

        if(front==-1 || front>back){
            cout<<"Queue Empty"<<endl;
            return;
        }

        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"Queue Empty"<<endl;
            return -1;
        }

        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
            cout<<"Queue Empty"<<endl;
            return true;
        }

        return false;

    }
};

int main(){

    queue q; //create q object of class queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

    return 0;
}