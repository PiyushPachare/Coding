/*
Objective: To get the factorial of the n
Base Case : If n == 0:
return 1;

We multiply the current number and recurse for factorial(n-1)
Time Complexity: O(N)
Space Complexity: O(N)
*/

#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    //recursion
    return n * factorial(n - 1);
    ;
}

int main()
{

    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}