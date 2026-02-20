// transpose of matrix or ek hota h reverse of transpose vo leetcode pe h

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}