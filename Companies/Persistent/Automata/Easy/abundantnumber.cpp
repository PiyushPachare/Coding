/*
An abundant number is a number for which the sum of its proper divisors is greater than the number itself.
The divisors of 12 are 1, 2, 3, 4 and 6.
The sum of divisors of 12 is 16.
12 < 16.Hence, 12 is an abundant number.
*/

#include<iostream>
using namespace std;

int main(){

    int num,temp;
    cin>>num;
    int sum=0;

    for(int i=0;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }

    if(num<sum){
        cout<<"True";
    }else{
        cout<<"False";
    }
}