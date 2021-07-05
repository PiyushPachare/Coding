/*
Pair Target Sum Problem
Find whether there exist 2 numbers that sum to K.
Important: The Array should be sorted for two pointer approach.
Idea: keep a low and high pointer, decide which pointer to move on the basis of
arr[low] + arr[high].
Time Complexity: O(N)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{

    int arr[] = {2, 4, 7, 11, 14, 15, 16, 20};
    int k = 31;

    cout << pairsum(arr, 8, k);
    return 0;
}