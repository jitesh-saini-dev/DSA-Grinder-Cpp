

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int row = v.size();
//     int col = v[0].size();
//     int target = 6;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (v[i][j] == target)
//             {
//                 cout << i << ", " << j;
//             }
//         }
//         cout << endl;
//     }
// }

//----------------------with store values------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<vector<int>> v = {{6, 1, 2}, {3, 6, 4}, {9, 6, 3}};
//     int row = v.size();
//     int col = v[0].size();
//     int target = 6;
//     int rowindex = -1, colindex = -1;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (v[i][j] == target)
//             {
//                 rowindex = i;
//                 colindex = j;
//             }
//         }
//     }
//     cout << rowindex << ", " << colindex << endl;
// }

//------------------------with reverse--------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<vector<int>> v = {{6, 1, 2}, {3, 6, 4}, {9, 6, 3}};
//     int row = v.size();
//     int col = v[0].size();
//     int target = 6;

//     for (int i = row - 1; i >= 0; i--)
//     {
//         for (int j = col - 1; j >= 0; j--)
//         {
//             if (v[i][j] == target)
//             {
//                 cout << i << ", " << j << endl;
//                 return 0;
//             }
//         }
//     }
// }