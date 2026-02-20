// find index of first 2 in each row--------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 2}, {2, 5, 2}, {7, 8, 2}};
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        int target = 2;

        for (int j = 0; j < col; j++)
        {
            if (v[i][j] == target)
            {
                cout << i << j << " ";
                break;
            }
        }
        cout << endl;
    }
}