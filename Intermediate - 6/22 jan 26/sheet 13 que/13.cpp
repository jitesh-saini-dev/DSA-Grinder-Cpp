#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, -3}, {4, -1, 6}, {7, 8, -9}};
    int pos = 0, neg = 0;
    int row = v.size();
    int col = v[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int value = v[i][j];
            if (value >= 0)
                pos++;
            else
                neg++;
        }
    }
    cout << "Positve are: " << pos << endl
         << "Negative are: " << neg;
}