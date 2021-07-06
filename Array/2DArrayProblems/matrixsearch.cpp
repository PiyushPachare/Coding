/*
Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000

Time complexity : O(N + M)
*/
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int target;
    cin >> target;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    int r = 0, c = m - 1;
    bool found = false;

    while (r < n && c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
        }
        if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
