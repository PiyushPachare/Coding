/*
Quick sort
Idea: Select a random pivot, put it in its correct position, and sort the left and right part recursively.
Time Complexity: Avg = O(N logN), Worst Case = O(N2)
*/
#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);

    return i + 1;
}

void quicksort(int arr[], int l, int r)
{

    if (l < r)
    {

        int pi = partition(arr, l, r); //pi = pivot point index (element which is sorted)
        quicksort(arr, l, pi - 1);     //l=starting point,pi=pivot point,r=endpoint
        quicksort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    quicksort(arr, 0, 4); //r=size-1
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}