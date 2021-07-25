/*
Program to print solid and hollow square star pattern is discussed here. For any given number n, print hollow and solid square star patterns.
*/

#include<iostream>
using namespace std;

int main(){

    // C++ program to print solid square star pattern

	int i, j,n;
	cin >> n;
	for(i = 0; i <n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
    cout<<endl;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i==1 || i==n || j==1 || j==n)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

    return 0;

}