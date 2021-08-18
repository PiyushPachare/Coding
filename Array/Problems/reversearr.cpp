/*
Reverse array without using another arr
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter arr ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,temp;
    int j=n-1;

    while(i<j){
        //swap
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }





}