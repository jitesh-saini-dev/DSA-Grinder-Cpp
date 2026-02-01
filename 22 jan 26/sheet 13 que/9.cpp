// maxsum row-------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = v.size();
    int col = v[0].size();
    vector<int> ans;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += v[i][j];
        }
        ans.push_back(sum);

        // cout << sum << " ";
    }
    int maxsum = 0;

    for (auto x : ans)
    {
        if (x > maxsum)
        {
            maxsum = x;
        }
    }
    cout << maxsum;
}