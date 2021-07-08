/*
Given a string of integers, our task is to form the biggest number out of those
numbers in the string.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s = "1234567890";

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;

    return 0;
}