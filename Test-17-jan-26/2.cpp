#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {6,9,1,3,1,4};
    vector<int> store;

    for (auto x : v)
    {
        if (x != 1)
        {
            store.push_back(x);
        }
    }

    int i = 0;
    for (auto x : store)
    {
        v[i] = x;
        i++;
    }
    while (i < v.size())
    {
        v[i] = 1;
        i++;
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
}