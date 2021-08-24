#include<iostream>
#include<string>
using namespace std;

void asciiconversion(string str){

    int l=str.length();
    int convert;
    for(int i=0;i<l;i++){
        char x = str.at(i);
        cout<<int(x);
    }
}

int main(){

    string str;
    cin>>str;

    asciiconversion(str);
    return 0;
}