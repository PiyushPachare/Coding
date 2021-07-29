#include<iostream>
#include<stack>
using namespace std;

class queue{

    stack<int> s1;
    stack<int> s2;

    public:
    
    void push(int x){
        s1.push(x);
    }

    int pop(){

        if(s1.empty() && s2.empty()){ //check s1 ans s2 stack
            cout<<"Queue is Empty";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){ //upto s1 is empty
                s2.push(s1.top()); //push s1 to s2
                s1.pop();   //pop from s1
            }
        }

        int topval=s2.top(); //pop top val
        s2.pop();
        return topval;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){ //check s1 ans s2 stack
            return 1;
        }
        return 0;

    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
}