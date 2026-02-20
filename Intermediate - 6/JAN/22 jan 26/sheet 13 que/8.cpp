#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int even = 0, odd = 0;
    int row = v.size();
    int col = v[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int value = v[i][j];
            if (value % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    cout << even << " " << odd;
}