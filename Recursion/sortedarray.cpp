/*
Objective: Check if the array is in strictly increasing order or not.
Time Complexity: O(N)
Space Complexity: O(N) for function call stack
*/

#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{

    //base condition
    if (n == 1)
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{

    int arr[] = {1, 2, 7, 4, 5, 6, 7};
    cout << sorted(arr, 5);
    return 0;
}