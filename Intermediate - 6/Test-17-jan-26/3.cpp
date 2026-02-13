#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int temp = v[v.size() - 1];
    int temp2 = v[v.size() - 2];

    // for (int i = v.size() - 1; i >= 1; i--)
    // {
    //     v[i] = v[i - 1];
    // }

    // v[0] = temp;
    // for (int i = v.size() - 2; i >= 1; i--)
    // {
    //     v[i] = v[i - 1];
    // }
    // v[0] = temp2;
    

      for (int i = v.size() - 1; i >= 1; i--)
    {
        v[i] = v[i - 1];
    }

    v[0] = temp;
   
    for (auto x : v)
    {
        cout << x << " ";
    }
}