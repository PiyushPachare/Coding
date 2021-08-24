#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int octal,decimal=0,i=0;

    cout<<"Enter octal Number";
    cin>>octal;

    while(octal!=0){

        decimal += (octal%10) * pow(8,i);
        ++i;
        octal/=10;
    }

    cout<<decimal;

    return 0;
}