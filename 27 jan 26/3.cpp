#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> v = {
        {'R', 'K', 'M', 'S'},
        {'A', 'E', 'O', 'O'},
        {'H', 'Z', 'D', 'N'},
        {'L', 'R', 'I', 'I'}};

    int row = v.size();
    int col = v[0].size();
    string target = "MODI";
    string ans = "";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans += v[j][i];
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
