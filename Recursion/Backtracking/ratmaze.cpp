/*
Rat In a Maze
Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
You can not move to the walls.
Idea: Try all the possible paths to see if you can reach (n-1,n-1)
Time Complexity: O(2n)
Space Complexity: O(2n)
*/
#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n) // dynamic allocation of arry - int** arr, x and y postion,n 2d matrix size
{
    if (x < n && y < n && arr[x][y] == 1)
    { // to check if rat can go on these blocks
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solArr)
{

    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1; //set to 1
        if (ratinMaze(arr, x + 1, y, n, solArr))
        { //towards right direction
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solArr))
        { //towards left direction
            return true;
        }
        solArr[x][y] = 0; //backtracking
        return false;
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    int **arr = new int *[n]; //dynamic arr allocation
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //for solution arr
    int **solArr = new int *[n]; //dynamic arr allocation
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    //printing solution
    if (ratinMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}