// count -ve values in 2d array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{4, 2, -3}, {4, -2, 6}, {-5, 8, 5}};
    int target = 0;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i][j] < 0)
            {
                count++;
            }
        }
    }
    cout << count;
}