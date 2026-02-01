// basic array que.
//  take 5 integers in an array from user and print them.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
}