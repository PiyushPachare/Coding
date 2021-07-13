/*
Find the number of ways to tile the floor with 1x2 and 1x1 tiles.
Idea: Tile[i] = Tile[i-1] (1x1) + Tile[i-2](1x2)
Time Complexity: O(2n)
Space Complexity: O(2n) //Memory is used for call stack as well
*/

#include <iostream>
using namespace std;

int tilingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{
    cout << tilingWays(4);
    return 0;
}