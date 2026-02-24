// reverse every row in 2d array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{9, 8, 7}, {89, 76, 34}, {90, 12, 75}};
    vector<vector<int>> ans;

    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        vector<int> store;
        for (int j = 0; j < col; j++)
        {
            store.push_back(v[i][j]);
        }
        reverse(store.begin(), store.end());
        ans.push_back(store);
    }

     for (int i = 0; i < row; i++)
    {
        vector<int> store;
        for (int j = 0; j < col; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
