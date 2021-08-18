#include<iostream>
#include<string>
using namespace std;

int main(){

    char rev[1000];
    int i,j,count=0;
    char str = "piyush";
    

    while(str[count] != ' '){
        count++;
    }
    
    j=count-1;
    for(i=0;i<count;i++)
    {
        rev[i]=str[j];
        j--;
    }

    cout<<rev;

}