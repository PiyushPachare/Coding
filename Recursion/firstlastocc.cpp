/*
Objective: To find the first occurrence, we return as soon as we find the element.
To find the last occurrence, we return the result we get from further function
calls.
Base Case would be when you reach the end of the array.
Time Complexity: O(N)
Space Complexity: O(N) for function call stack
*/

#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1; //if occ not found

    if (arr[i] == key)
        return i;

    return firstocc(arr, n, i + 1, key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if (i == n)
        return -1; //if occ not found

    int restArray = lastocc(arr, n, i + 1, key);

    if (restArray != -1)
        return restArray;

    if (arr[i] == key)
        return i;

    return -1;
}

int main()
{

    int arr[] = {4, 2, 1, 2, 5, 3, 4, 6, 6};

    cout << lastocc(arr, 9, 0, 2);
    return 0;
}