#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v = {"apple", "apple", "cat", "dog", "dog"};
    map<string, int> m;
    for (auto x : v)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        cout << x.first << "=>" << x.second << "\n";
    }
}