/*
For example, 5 is an automorphic number, 5*5 =25. 
The last digit is 5 which same as the given number. 
It has only a positive single digit number. 
If the number is not valid, it should display "Invalid input".
If it is an automorphic number display Automorphic Number else display Not Automorphic Number.
*/

#include<iostream>
using namespace std;

bool isAutomorphic(int n){

    int sq = n*n;

    while(n>0){
        if(n%10 != sq%10) //compare if sq last digit is equal to n
            return false;

            //reduce n and square
            n /=10;
            sq /=10;
    }

    return true;
}

int main(){

    int n;
    cin>>n;
    cout<<isAutomorphic(n);
}