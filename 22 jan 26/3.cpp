//----------------telling count of target element in 2d vector----------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 5, 3}, {4, 5, 6}, {7, 8, 5}};
    int row = v.size();
    int col = v[0].size();
    int target = 5;
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
    cout << count << endl;
}