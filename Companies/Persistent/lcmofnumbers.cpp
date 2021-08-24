/*
Two numbers are obtained as input and the prime factors of both the numbers are found. 
The product of the union of prime factors of both the numbers gives the LCM of the two numbers.
*/

#include<iostream>
using namespace std;

int main(){

    int a,b,lcm;
    cout<<"Enter Numbers"<<endl;
    cin>>a>>b;

    lcm = (a>b) ? a : b; //ternary operator storing largest number

    while(1){
        if(lcm % a == 0 && lcm % b == 0){ //checking if largest number is divisible by both numbers or incrementing 
            cout<<lcm<<endl;
            break;
        }
        ++lcm;
    }

    return 0;
}