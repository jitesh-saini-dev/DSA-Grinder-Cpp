// count odd values in 2d array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{0, 2, 3}, {4, 0, 6}, {0, 8, 5}};
    int target = 0;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i][j] % 2 != 0)
            {
                count++;
            }
        }
    }
    cout << count;
}