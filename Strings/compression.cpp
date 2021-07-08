/*
Given a string s, your task is to remove the repeating consecutive characters.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s = "aaaaaaaaaaasssssssssssssaaaaaaaaaaaaasssssssasggggggggaaaaaaaahhhh";
    int n = s.size();

    //delete repeating character

    char ans[100];
    ans[0] = s[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i = 1]) //if element is equal to previous element do not push element
        {
            ans[cnt] = s[i], cnt++;
                }
    }
    cout << ans << endl;

    return 0;
}