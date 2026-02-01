#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    for (int i = 1; i <= 3; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
}