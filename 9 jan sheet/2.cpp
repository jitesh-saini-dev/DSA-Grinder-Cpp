// print the largest element in the array.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {2, 3, 4, 5, 6, 7, 8};
//     int largest = INT_MIN;

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] > largest)
//         {
//             largest = v[i];
//         }
//     }
//     cout << largest;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7, 8};
    int ans = 0;

    for (auto x : v) {
        ans = max(ans, x);
    }

    cout << ans;
    return 0;
}
