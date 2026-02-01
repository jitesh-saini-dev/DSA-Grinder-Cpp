// spiral matrix leetcode :

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = col; j >=0; j--)
        {
            cout<<v[i][j];

        }
    }
}