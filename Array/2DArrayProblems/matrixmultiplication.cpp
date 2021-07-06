/*
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000

Time Complexity: O(n1*n2*n3)
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];

    //creating first arr
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> m1[i][j];
    }

    //creating second arr
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
            cin >> m2[i][j];
    }

    //creating answer array
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            ans[i][j] = 0; //initial put 0
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
