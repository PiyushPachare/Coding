/*
Program to find the GCD of two numbers is discussed here. 
The HCF (Highest Common Factor or GCD (Greatest Common Divisor) 
of two integers is nothing but the largest integer that can exactly divide a given number without leaving a remainder.
*/

#include<iostream>
using namespace std;

int main(){

    int a,b,gcd;
    cout<<"Enter Two numbers"<<endl;
    cin>>a>>b;

    for(int i=1;i<=a && i<=b;i++){ //taking numbers from 1
        if((a%i ==0) && (b%i == 0)){ //check number is divisible by a and b
            gcd = i;
        }
    }

    cout<<gcd;
}