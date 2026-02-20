// 1512. Number of Good Pairs

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 1, 1, 3};
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}