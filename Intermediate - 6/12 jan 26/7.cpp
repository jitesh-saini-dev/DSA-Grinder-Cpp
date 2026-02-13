// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {2, 6, 3, 3, 7};

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             if (v[i] < v[j])
//             {
//                 swap(v[i], v[j]);
//             }
//         }
//     }
//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 6, 3, 3, 7};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }
}
