/*
Program to check if a given number is a strong number or not is discussed here. 
A strong number is a number in which the sum of the factorial of the digits is equal to the number itself.
*/

#include<iostream>
using namespace std;

int findFactorial(int n){
	int i,factorial=1;
	for(i=1;i<=n;i++){
		factorial = factorial * i;
	}
	
	return factorial;
}

int main(){

	int number,lastDigit,orignialNumber,sum=0,factorial;

	cout<<"Enter a positive integer: ";
	cin>>number;

	orignialNumber = number;
	// A number is called strong if sum of factorial of digits
	// is equal to the original number.

	// check for strong
	while(number != 0){
		lastDigit = number % 10;
		factorial = findFactorial(lastDigit);
		sum += factorial;
		number = number / 10;
	}

	if(sum == orignialNumber)
		cout<<"The number is Strong \n";
	else
		cout<<"It is not a Strong Number \n";

	
}

