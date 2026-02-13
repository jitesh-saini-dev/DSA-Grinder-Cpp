// 7 Print all unique elements of an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 1, 3, 4, 5, 3};
    map<int, int> m;
    for (auto x : v)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        if (x.second == 1)
        {
            cout << x.first << " ";
        }
    }
}