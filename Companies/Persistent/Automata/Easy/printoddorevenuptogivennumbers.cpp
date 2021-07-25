/*
The function printPattern(int  num)​ prints elements of an pre inputted array based on the value of input argument num​  ​(num>=​ 0). If the input number num​ is even, the function is expected to print all the even numbers upto num of the array, and in case it’s odd, is expected to print all the odd numbers upto num of the array.
Input:
    Num , where 0 <= num <= 10
Output:
    All numbers separated with space.
Example:
Input:
Num = 2
Arr[] = {1,2,3,4,5,6,7,8,9,10}
Output:
the function prints 2(without quotes).
*/

#include<iostream>
using namespace std;

void printpattern(int num){

    int arr[] = {1,2,3,4,5,6,7,8,9,3,3,2,22,2,2};

    if(num%2==0){  //checking for num (even or odd)
        for(int i=0;i<num;i++){
            if(arr[i]%2==0){ //checking for arr elements(even or odd)
                cout<<arr[i];
            }
        }
    }else{
        for(int i=0;i<num;i++){
            if(arr[i]%2!=0){
                cout<<arr[i];
            }
        }
    }
}

int main(){
    int num=13;
    printpattern(num);
    return 0;
}