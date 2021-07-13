/*
Base Case:  If the string is empty:
            return “”;
If s[0] == ‘p’ and s[1] == ‘i’ :
    print(“3.14”)
else:
    print(s[0])
Time Complexity: O(N2)
Space Complexity: O(N2)

FollowUp: Try to do this in O(N) time and space. Hint: Pass by reference and indices.
*/
#include <iostream>
using namespace std;

void replacepi(string s)
{

    if (s.length() == 0)
    { //base case
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacepi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacepi(s.substr(1));
    }
}

int main()
{

    replacepi("piiiiiiiiiiiiiiipiiiiiiiiiiiiipipippiippi");
    return 0;
}