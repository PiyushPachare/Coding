/*
Key Points
The O(N) sort.
Note: Only limited to small positive integers only.
Input: Given an array.
Output: print the sorted array.
Time Complexity: O(N)
Space Complexity: O(max(Arr))
*/

#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int k = arr[0];
    for (int i = 0; i < n; i++)
        k = max(k, arr[i]); //finding max number in arr

    int count[k] = {0};
    for (int i = 0; i < n; i++)
        count[arr[i]]++; //storing count of every element

    for (int i = 1; i <= k; i++)
        count[i] += count[i - 1];

    int output[n];
    for (int i = n - 1; i >= 0; i--)
        output[--count[arr[i]]] = arr[i]; //decrement first and then assign value

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
    int arr[] = {1, 3, 2, 3, 4, 6, 2, 8, 3, 5, 3};
    countSort(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}