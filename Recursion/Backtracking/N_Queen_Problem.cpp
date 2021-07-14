#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{

    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        { //check if there is queen
            return false;
        }
    }

    //check left diagonal
    int row = x, col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    //check right diagonal
    row = x, col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool nQueen(int **arr, int x, int n) //not taking y because after placing x we don't need to check next column
{
    if (x >= n)
    {
        return true; //base case - placed all queen in all rows
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;

            if (nQueen(arr, x + 1, n))
            {
                return true;
            }

            arr[x][col] = 0; //backtracking
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; i < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; i < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}