// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {2, 3, 4, 5, 6, 7, 8};
//     int smallest = INT_MAX;

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] < smallest)
//         {
//             smallest = v[i];
//         }
//     }
//     cout << smallest;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7, 8};
    int ans = INT_MAX;

    for (auto x : v) {
        ans = min(ans, x);
    }

    cout << ans;
    return 0;
}
