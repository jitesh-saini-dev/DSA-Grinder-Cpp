// //largest in column---
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> v = {{9, 8, 7}, {89, 76, 34}, {90, 12, 75}};
//     vector<int> ans;
//     int row = v.size();
//     int col = v[0].size();
//     for (int i = 0; i < row; i++)
//     {
//         int largest = 0;
//         for (int j = 0; j < col; j++)
//         {
//             if (largest < v[j][i])
//             {
//                 largest = v[j][i];
//             }
//         }
//         ans.push_back(largest);
//     }

//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
// }

// largest in column---
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{9, 8, 7}, {89, 76, 34}, {90, 12, 75}};
    vector<int> ans;
    int row = v.size();
    int col = v[0].size();
    int i = 0;
    while (i < row)
    {
        int largest = 0;
        int j = 0;
        while (j < row)
        {
            if (largest < v[j][i])
            {
                largest = v[j][i];
            }
            j++;
        }
        ans.push_back(largest);
        i++;
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}