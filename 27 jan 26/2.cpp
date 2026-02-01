
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<vector<char>> v = {
//         {'R', 'A', 'H', 'L'},
//         {'K', 'E', 'Z', 'R'},
//         {'M', 'O', 'D', 'I'},
//         {'S', 'O', 'N', 'I'}};

//     string target = "MODI";

//     for (auto x : v)
//     {
//         string ans = "";

//         for (auto y : x)
//         {
//             ans += y;
//         }

//         if (ans == target)
//         {
//             cout << "true";
//             return 0;
//         }
//     }

//     cout << "false";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> v = {
        {'R', 'A', 'H', 'L'},
        {'K', 'E', 'Z', 'R'},
        {'M', 'O', 'D', 'I'},
        {'S', 'O', 'N', 'I'}};

    int row = v.size();
    int col = v[0].size();
    string target = "MODI";
    string ans = "";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans += v[i][j];
        }

        if (ans == target)
        {
            cout << "true";
            return 0;
        }
        ans = "";
    }

    cout << "false";
    return 0;
}
