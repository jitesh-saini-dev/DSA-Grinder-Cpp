#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {8,1,2,2,3};
    vector<int> ans;

    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;   // reset for each element

        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] < v[i])
            {
                count++;
            }
        }
        ans.push_back(count);
    }

    // print result
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
