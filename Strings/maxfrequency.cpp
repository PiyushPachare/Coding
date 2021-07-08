/*Given a string s of latin characters, your task is to output the character which has
maximum frequency.*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s = "qwertyuiashjxcvbsdfghsdfghsdfghggggjwertnbvcxcvbhgfdnm";

    int a[26];

    for (int i = 0; i < 26; i++)
        a[i] = 0; //initialize all element with 0

    for (int i = 0; i < s.size(); i++)
        a[s[i] - 'a']++; //number of occurence are storeing at specific postion like a^i=0,b^i=1...

    char ans;
    int maxFreq = -1;

    for (int i = 0; i < 26; i++)
    {
        if (maxFreq < a[i])
        {
            maxFreq = a[i];
            ans = i + 'a';
        }
    }

    cout << maxFreq << " " << ans << endl;
    return 0;
}