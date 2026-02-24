// replace all even values with -3

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> v = {{1, 2, 3}, {9, 7, 4}, {9, 12, 15}};
//     int row = v.size();
//     int col = v[0].size();

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {

//             cout<<v[i][j]*v[i][j]<<" ";

//         }
//         cout<<endl;
//     }

// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {9, 7, 4}, {9, 12, 15}};
    int row = v.size();
    int col = v[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            v[i][j] = v[i][j] * v[i][j];
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