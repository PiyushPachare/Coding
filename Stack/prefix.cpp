/*
<operator><operand><operand>
*/

#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){

    stack<int> st;

    for(int i=s.length()-1;i>=0;i--){ //s.lenth()-1 start evaluting from end of string

        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0'); //s[i]-'0' gives int value of respective string
        }else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }
    } 
    return st.top(); 
}

int main(){

    cout<<prefixEvaluation("-+7*45+20");

    return 0;
}

/*
Time complexity = O(l) l-length of string
*/