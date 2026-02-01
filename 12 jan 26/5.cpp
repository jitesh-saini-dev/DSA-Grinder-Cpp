// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1, 2, 1, 3, 2, 4, 5, 6, 7};
//     vector<int> res = v;

//     for (auto x : res)
//     {
//         cout << x << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 1, 3, 2, 4, 5, 6, 7};
    vector<int> res;

    for (auto x : v)
    {
        if (find(res.begin(), res.end(), x) == res.end())
        {
            res.push_back(x);
        }
    }
    for (auto x : res)
    {
        cout << x << endl;
    }
    for (auto x : v)
    {
        cout << x << endl;
    }
}