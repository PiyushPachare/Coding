#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){ 

    stack<string> st;

    for(int i=0;i<s.length();i++){ //lopp to enter each element in stack

        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i]; //storing that word in word 
            i++;
        }
        st.push(word); //pushing word in stack
    }

    while(!st.empty()){ //loop to print elements in stack
        cout<<st.top()<<" ";
        st.pop(); //important to remove top or it while print only top
    }cout<<endl;
}

int main(){

    string s;
    cout<<"Enter String to reverse"<<endl;
    getline(cin,s);
    

    reverseSentence(s);

    return 0;
}