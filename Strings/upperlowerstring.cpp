/*
Given a string s with both uppercase and lowercase latin characters (‘a’ - ‘z’). Your
task is convert whole string into
1. Lower Case
2. Upper Case
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string str = "sdfghjkyuio";

    //convert to uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    //convert to lowercase
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    //inbuild function

    string s = "dfghjklfghjk";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}