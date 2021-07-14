#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1); //pushing elements
    v.push_back(2);
    v.push_back(3);

    //printing elements
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    //printing elements using iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    //printing elements using auto keyword
    for (auto element : v)
    {
        cout << element << " ";
    }

    v.pop_back(); // v = 1, 2

    vector<int> v2(3, 50);

    //swaping vector
    swap(v, v2);
    for (auto element : v)
    {
        cout << element << " ";
    }
    for (auto element : v2)
    {
        cout << element << " ";
    }

    return 0;
}