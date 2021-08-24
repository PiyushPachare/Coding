/*
Write a program to calculate the sum of elements of an array that are equal to the integer entered by the user. The inputs will be the size of the array, elements of the array, and an integer. You have to print the sum calculated after adding all the elements that match the integer entered by the user.
Input:
    Length
    Input number
    Element
Output:

    Sum of elements the same as the value
Example:
Input:
8
1 2 3 4 2 5 6 2
2
Output:
6
*/

#include<iostream>
using namespace std;

int main(){

    int len,k;
    cin>>len>>k;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<len;i++){
        if(arr[i]==k){
            sum+=arr[i];
        }
    }
    cout<<sum;

    return 0;
}