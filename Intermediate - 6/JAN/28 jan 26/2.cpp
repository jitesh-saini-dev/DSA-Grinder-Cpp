#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] == 0)
            {
                int x = i;
                int y = j;
                x--;
                v[x][j] = -1;

                y++;
                v[i][y] = -1;

                x = x + 2;
                v[x][j] = -1;

                y = y - 2;
                v[i][y] = -1;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] == -1)
            {
                v[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
