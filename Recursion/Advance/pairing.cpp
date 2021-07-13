/*
Friends Pairing Problem
There are n friends, we have to find all the pairings possible. Each person can be
paired with only one person or does not pair with anyone.
Idea: we have two options, i’th friend does not get paired or we have n-1 options
to pair it with anyone.
Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <iostream>
using namespace std;

int pairing(int n)
{

    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return pairing(n - 1) + pairing(n - 2) * (n - 1);
}

int main()
{
    cout << pairing(4);
    return 0;
}