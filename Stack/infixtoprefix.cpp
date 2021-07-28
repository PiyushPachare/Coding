/*
Code for infix-to-postfix is same for infix-to-prefix
1. reverse string
2. change ( to ) or ) to (
3. reverse result
*/

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char c){

    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixtoPrefix(string s){

    reverse(s.begin(),s.end()); //reverse string
    stack<char> st;
    string result;

    for(int i=0;i<s.length();i++){

        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            result+=s[i];
        }
        else if(s[i]==')'){ ////change ( to ) for prefix
            st.push(s[i]);
        }
        else if(s[i]=='('){ //change ) to ( for prefix
            while(!st.empty()&& st.top()!=')'){ //store in result upto 
                result+=st.top();
                st.pop();
            }
            if(!st.empty()){ //pop opening bracket
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                result+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        result+=st.top();
        st.pop();
    }

    reverse(result.begin(),result.end());
    return result;
}

int main(){

    cout<<infixtoPrefix("(a-b/c)*(a/k-l)")<<endl;

    return 0;
}