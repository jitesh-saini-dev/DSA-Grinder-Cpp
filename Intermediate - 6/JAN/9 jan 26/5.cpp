#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v = {'a', 'b', 'a', 'c', 'b', 'a', 'd'};
    map<char, int> m;
    for (auto x : v)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        cout << x.first << "=>" << x.second << "\n";
    }
}