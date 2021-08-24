/*
The program works only with binary numbers given in the range of integers (-32767 to 32767). 
To work with long binary numbers (greater range of numbers with 20 bits or 30 bits), 
a string variable is used to store the binary numbers.
*/

#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int convert_binary_to_decimal(int n){

    int decimal=0,i=0,remainder;

    while(n!=0){

        remainder=n%10; //last digit
        n/=10;
        decimal += remainder*pow(2,i);
        ++i;
    }

    return(decimal);
}

//function to convert large binary number to decimal
int binary_to_decimal(string num){

    string n = num;
    int decimal = 0;

    int base = 1;

    int len = num.length();
    for(int i=len-1;i>=0;i--){
        if(num[i] == '1'){
            decimal +=base;
            base = base*2;
        }
    }

    return decimal;

}

int main(){

    long int n;
    string num;

    cout<<"Enter binary number"<<endl;
    cin>>n;
    cout<<convert_binary_to_decimal(n)<<endl;
    cout<<"Enter binary number"<<endl;
    cin>>num;
    cout<<binary_to_decimal(num)<<endl;


    return 0;
}