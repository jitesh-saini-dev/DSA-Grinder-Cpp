#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {64, 25, 12, 22, 11};

    for (int i = 0; i < v.size(); i++)
    {
        int minindex = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] < v[minindex])
            {
                minindex = j;
            }
        }
        swap(v[i], v[minindex]);
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
}