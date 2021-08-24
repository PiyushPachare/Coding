/*
Ram is a 6 years old boy who loves to play with numeric legos. One day Ram’s mom created a number using those legos and asked ram to tell the number of elements available between two specific numbers ‘alpha1’ and ‘alpha2’. After 15 years when Ram started learning to program, he now wants to write a code to find the number of elements lies between ranges alpha1 and alpha2. 
If the number is arr and the starting and ending points are alpha1 and alpha2, find the numbers of elements lies in the range.
Input:
    Three space-separated integers

        First is the length of arr.
        Second is the starting point as alpha1.
        The third is the endpoint as alpha2.
    N space-separated array elements.
Output:
    Space-separated indexes between alpha1 and alpha2.
Example:

Input:

9 2 6 1 2 3 4 5 6 7 8 9

Output:

1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){

    int starting_point,ending_point,arr[20],len;
    cin>>len>>starting_point>>ending_point;
    //taking numbers
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    //printing numbers between that range
    for(int i=0;i<len;i++){
        if(arr[i]>=starting_point && arr[i]<ending_point){
            cout<<i<<" ";
        }
    }

    return 0;
}