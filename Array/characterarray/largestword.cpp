#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    //getting sentence
    cin.getline(arr, n);
    cin.ignore(); //clearing buffer
    int i = 0;
    int currLen = 0;
    int maxLen = 0;
    //for printing largest word
    int st = 0;
    int maxst = 0;

    while (i < n)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxst = st;
                maxLen = currLen;
            }
            st = i + 1;
            currLen = 0;
        }
        else
        {
            currLen++;
        }

        if (arr[i] == '\0')
            break;
        i++;
    }

    cout << maxLen << endl;

    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[maxst + i];
    }
    cout << endl;
}