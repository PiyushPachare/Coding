//Print all possible sub array from given array
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //Brute Force approach
    /*for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }*/

    //cumulative sum approach
    int cumsum[n + 1];
    cumsum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cumsum[i] = cumsum[i - 1] + a[i - 1];
    }

    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j < 1; j++)
        {
            sum = cumsum[i] - cumsum[j - 1];
            maxSum = max(sum, maxSum);
        }
    }

    cout << maxSum << endl;

    return 0;
}

//kadane's algo is better