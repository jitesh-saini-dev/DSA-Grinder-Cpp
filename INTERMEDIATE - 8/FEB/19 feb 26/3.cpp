// count no. of zeros in 2d vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{0, 2, 3}, {4, 0, 6}, {0, 8, 0}};
    int row = v.size();
    int col = v[0].size();
    int target = 0;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (v[i][j] == target)
            {
                count++;
            }
        }
    }
    cout << count;
}