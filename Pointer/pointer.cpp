#include<iostream>
using namespace std;

int main(){

    // int a=10;
    // int *aptr;
    // aptr=&a;

    // cout<<&a<<endl;
    // cout<<aptr<<endl;
    // cout<<*aptr<<endl; //dereferencing pointer

    // *aptr=20;
    // cout<<a<<endl;

    // aptr++; //it will increment by 4bytes(INT)
    // cout<<aptr<<endl;

    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
        cout<<*(arr+1)<<endl; //indexing pointer 
    }

    return 0;
}