#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int topelement){

    if(st.empty()){ //base condition
        st.push(topelement);
        return;
    }

    int topele = st.top(); //store top element
    st.pop();   //pop element
    insertAtBottom(st,topelement); //call recursively insertatbottom

    st.push(topele);    //push topele
}

void reverse(stack<int> &st){ //taking st as call by referce because we are modifeing same stack

    if(st.empty()){ //base condition
        return;
    }

    int topelement = st.top(); //store top element in topelement
    st.pop();   //pop element
    reverse(st); //call recursively reverse
    insertAtBottom(st,topelement); //call insertatbottom
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);

    while(!st.empty()){ //print reverse stack
        cout<<st.top()<<endl;
        st.pop();
    }cout<<endl;
}