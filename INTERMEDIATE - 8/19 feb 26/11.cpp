//count values which are divisible by 3 and 5
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{7, 2, 3}, {14, 1, 6}, {21, 28, 5}};
    int target = 0;
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (v[i][j] % 3 == 0 && v[i][j] % 5 == 0)
            {
                count++;
            }
        }
    }
    cout << count;
}