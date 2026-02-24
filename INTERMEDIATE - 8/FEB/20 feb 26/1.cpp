#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{9, 8, 7}, {89, 76, 34}, {90, 12, 75}};
    int row = v.size();
    int col = v[0].size();
    int largest = 0;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (largest < v[i][j])
            {
                largest = v[i][j];
            }
        }
    }
    cout << largest;
}