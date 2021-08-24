#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int start,end,i,temp1,temp2,n=0,result=0,remainder;

    cout<<"Enter start value and end value: ";
    cin>>start>>end;

    for(i=start+1;i<end;i++){

        temp2=i;
        temp1=i;

        while(temp1 != 0){ //finding out number of digit
            temp1/=10;
            ++n;
        }

        while(temp2 != 0){
            remainder = temp2%10;
            result+=pow(remainder,n);
            temp2/=10;
        }

        if(result==i){
            cout<<i<<" ";
        }

        n=0;
        result=0;
    }

    cout<<endl;
    return 0;

}