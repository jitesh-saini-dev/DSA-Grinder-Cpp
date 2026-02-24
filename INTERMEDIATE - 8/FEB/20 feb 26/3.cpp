#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{-9, -8, -7}, {-89, -76, -34}, {-90, -12, -75}};
    vector<int> ans;
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        int min = INT_MAX;
        for (int j = 0; j < col; j++)
        {
            if (min > v[i][j])
            {
                min = v[i][j];
            }
        }
        ans.push_back(min);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}