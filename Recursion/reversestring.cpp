/*
Objective: To print the string in reverse.
Base Case:  If the string is empty:
            return;

Reverse print the remaining string using recursion, and print then print the current character.
Time Complexity: O(N2) [IMP]
Space Complexity: O(N2) [IMP]
Time complexity will be O(N2) because s.substr(i) takes O(N) times and it is called O(N) times.
Space complexity will be O(N2) because s.substr(i) gives a string of O(N) size and it is called O(N) times.
FollowUp: Try to do this in O(N) time and space. Hint: Pass by reference and indices.
*/
#include <iostream>
using namespace std;

void reverse(string s)
{

    if (s.length() == 0)
    { //base case
        return;
    }

    reverse(s.substr(1));
    cout << s[0];
}

int main()
{
    reverse("binod");
    return 0;
}