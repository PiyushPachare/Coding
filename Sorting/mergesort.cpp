/*
Divide And Conquer(Merge sort)
Idea: Divide the array into two parts, sort the left part and sort the right part and merge them
Time Complexity: O(N logN)
Space Complexity: O(N) Since we need an arbitrary array as well.
*/
#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{

    int n1 = mid - l + 1; //size of first part
    int n2 = r - mid;     //size of second part
    int a[n1], b[n2];     //temp arry

    for (int i = 0; i < n1; i++)
    { //entering first half of arr
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    { //entering second half of arr
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    { //i is traversing n1 and j is traversing n2
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    //if j reach end
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    //if i reach end
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergesort(int arr[], int l, int r)
{

    if (l < r)
    { //l=r i.e one element left
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);     //first half arr
        mergesort(arr, mid + 1, r); //second half arr

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}