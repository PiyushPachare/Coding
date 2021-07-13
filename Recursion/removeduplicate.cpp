/*
Base Case: If the string is empty: //no duplicates
return “”;
If the current character ch is ‘x’, we return resultant string + ch,
Else we return ch + resultant string
Time Complexity: O(N2)
Space Complexity: O(N2)
Time complexity will be O(N2) because s.substr(i) takes O(N) times and it is called O(N) times.
Space complexity will be O(N2) because s.substr(i) gives a string of O(N) size and it is called O(N) times.
*/
#include <iostream>
using namespace std;

string removeDuplicate(string s)
{
    if (s.length() == 0)
    {
        return ""; //base case
    }

    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{

    cout << removeDuplicate("aaaaaaabbbbbccccccc");
    return 0;
}