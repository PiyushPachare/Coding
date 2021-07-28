#include<iostream>
using namespace std;

#define n 100

class stack{

    int* arr; //dynamic arr
    int top;

    public:
    stack(){
        arr=new int[n]; //giving arr memory
        top=-1; //inital top value -1
    }

    void push(int x){

        if(top==n-1){    //check if arr is full
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        arr[top]=x;
    }

    void pop(){

        if(top==-1){
            cout<<"Arr is empty"<<endl;
        }

        top--; //remove top
    }

    int Top(){

        if(top==-1){
            cout<<"Arr is empty";
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main(){

    stack st; //creating stack class
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;
}