/*
Find the security key to access the bank account in from the encrypted message. The key in the message is the first repeating number from the given message of numbers.
Input:
    String
Output:
    The first repeating number from the message

Example:
Input:
123456654321
Output:
1
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    char arr[256];
    int len,flag=0;
    cin>>arr;
    len= sizeof(arr);

    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j] && flag == 0){
                cout<<arr[j];
                flag=1;
                break;
            }
        }
    }

    return 0;
}