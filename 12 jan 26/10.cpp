#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};

    vector<int> ans;
    for (auto x : v1)
    {
        ans.push_back(x);
    }
    for (auto x : v2)
    {
        ans.push_back(x);
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
}