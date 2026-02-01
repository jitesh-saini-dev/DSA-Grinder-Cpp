#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = v.size();
    int col = v[0].size();
    for (auto x : v)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}