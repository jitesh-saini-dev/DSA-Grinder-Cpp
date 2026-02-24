// sum of each column----
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {9, 7, 4}, {9, 12, 15}};
    vector<int> ans;
    int row = v.size();
    int col = v[0].size();

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += v[j][i];
        }
        ans.push_back(sum);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}