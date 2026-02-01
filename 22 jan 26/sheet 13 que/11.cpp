#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int row = v.size();
    int col = v[0].size();
    vector<int> ans;

    for (int i = 0; i < row; i++)
    {
        int min = INT_MAX;

        for (int j = 0; j < col; j++)
        {

            if (v[j][i] < min)
            {
                min = v[j][i];
                ans.push_back(min);
            }
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
}