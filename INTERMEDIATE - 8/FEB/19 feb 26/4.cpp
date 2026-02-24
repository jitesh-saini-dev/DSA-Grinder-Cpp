// repalce no. of zeros in 2d vector with -1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{0, 2, 3}, {4, 0, 6}, {0, 8, 0}};
    int target = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i][j] == target)
            {
                v[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}