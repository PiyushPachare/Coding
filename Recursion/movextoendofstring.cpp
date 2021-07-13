/*
Base Case:  If the string is empty:
            return “ “;
If the current character ch is ‘x’, we add the resultant string + ch, Else we return ch + resultant string
Time Complexity: O(N2) [IMP]
Space Complexity: O(N2) [IMP]
Time complexity will be O(N2) because s.substr(i) takes O(N) times and it is calledO(N) times.
Space complexity will be O(N2) because s.substr(i) gives a string of O(N) size and itis called O(N) times.
FollowUp: Try to do this in O(N) time and space. Hint: Pass by reference and indices.
*/

#include <iostream>
using namespace std;

string moveallx(string s)
{

    if (s.length() == 0)
    {
        return ""; //base case
    }

    char ch = s[0];
    string ans = moveallx(s.substr(1)); //retunr rest of string

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{

    cout << moveallx("ssfagxxfgahjdxxxxxsgfdx");
    return 0;
}