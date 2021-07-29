//making pop costly
#include<iostream>
#include<queue>
using namespace std;

class Stack{

    queue<int> q1;
    queue<int> q2;
    int N;

    public:

    Stack(){
        N=0;
    }

    void pop(){

        if(q1.empty()){
            return;
        }
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1=q2;
        q2=temp;

    }

    void push(int x){
        q1.push(x);
        N++;
    }

    int top(){
        if(q1.empty())
            return -1;

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        int val = q1.front();
        q2.push(val);

        queue<int> temp = q1;
        q1=q2;
        q2=temp;

        return val;
    }

    int size(){
        return N;
    }

};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    return 0;
}