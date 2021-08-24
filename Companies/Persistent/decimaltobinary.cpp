#include<iostream>
using namespace std;
#define MAX 100

int main(){

    int n,i,arr[MAX];

    cout<<"Enter a decimal number";
    cin>>n;

    for(i=0;n!=0;i++){
        arr[i]=n%2; //storing remainder in arr
        n/=2;
    }

    for(i=i-1;i>=0;i--){
        cout<<arr[i];  //printing the array in reverse order
    }
}