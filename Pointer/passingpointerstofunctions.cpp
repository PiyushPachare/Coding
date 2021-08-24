#include<iostream>
using namespace std;

void increment(int* a){
    //a+=1;
    cout<<a<<endl;
}

int main(){

    int a=2;
    //int *aptr=&a;
    //increment(a); //passing by value
    increment(&a);//passing by reference
    cout<<a<<endl;

    return 0;
}