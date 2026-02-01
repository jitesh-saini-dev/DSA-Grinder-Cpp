#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = v.size();
    int col = v[0].size();
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int val = v[i][j];
            bool isPrime = true;

            if (val <= 1)
                isPrime = false;
            else
            {
                for (int k = 2; k * k <= val; k++)
                {
                    if (val % k == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime)
                {
                    count++;
                }
            }
        }
    }
    cout << count << " ";
}