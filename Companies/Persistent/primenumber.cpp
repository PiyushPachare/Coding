/*A number is said to be prime if it is divisible by 1 and itself. It should not have any other divisors.*/

#include<iostream>
using namespace std;

int main(){

    int n,i;
    cin>>n;

    for(i=2;i<=n/2;i++){ // 
        if(n%i==0){
            break;
        }
    }
    if(i>n/2){
        cout<<"Prime NUmber";
    }else{
        cout<<"Not Prime NUmber";
    }

    return 0;

}