/*
Knapsack [IMP]
Given n items, each item has a certain value and weight. We have to maximize the
value of the objects we can accommodate in a bag of weight W.
Idea: For each item, we have two choices, either to include it or exclude it.
Time Complexity: O(2n)
Space Complexity: O(2n) //space for call stack
*/

#include <iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] > W) //check if adding nth element wt is more than W
    {
        return knapsack(value, wt, n - 1, W);
    }

    return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], //with including nth element
               knapsack(value, wt, n - 1, W));                           //without including nth element
}

int main()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W = 50;

    cout << knapsack(value, wt, 3, W);
    return 0;
}