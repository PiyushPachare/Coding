#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int decimal,octal=0,i=1;

    cout<<"Enter decimal Number";
    cin>>decimal;

    while(decimal!=0){
        octal += (decimal%8) * i; //muliplying by 10 to store number in reverse order
        decimal /=8;
        i *= 10;
    }

    cout<<octal;
}