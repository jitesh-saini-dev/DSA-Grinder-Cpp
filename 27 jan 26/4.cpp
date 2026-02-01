// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<float>> v = {{1.5, 2.5, 3.1}, {4.7, 5.2, 6.3}, {7.4, 20, 9.4}, {3.4, 6.5, 7.3}};
//     int row = v.size();
//     int col = v[0].size();
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (v[i][j] % 2 == 0)
//             {
//                 cout << i << "," << j;
//             }
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<float>> v = {
        {1.5, 2.5, 3.1},
        {4.7, 5.2, 6.3},
        {7.4, 20.1, 9.4},
        {3.4, 20, 7.3}};
    float row = v.size();
    float col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int store = v[i][j];
            if (store == v[i][j])
            {
                cout << i << "," << j;
                return 0;
            }
        }
    }
    cout << "not having int values.";
}