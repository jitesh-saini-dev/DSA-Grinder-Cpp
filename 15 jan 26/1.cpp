// 5 Move all zeros to the end while maintaining order.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {0, 1, 0, 3, 12};
    // vector<int> store;

    // for (auto x : v)
    // {
    //     if (x != 0)
    //     {
    //         store.push_back(x);
    //     }
    // }

    // int i = 0;
    // for (auto x : store)
    // {
    //     v[i] = x;
    //     i++;
    // }
    // while (i < v.size())
    // {
    //     v[i] = 0;
    //     i++;
    // }
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
// }

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> store;
//         for (auto x : nums) {
//             if (x != 0) {
//                 store.push_back(x);
//             }
//         }
//         int i = 0;
//         int j = 0;
//         while (j < store.size()) {
//             nums[i] = store[j];
//             i++;
//             j++;
//         }
//         while (i < nums.size()) {
//             nums[i] = 0;
//             i++;
//         }
//     }
// };


//isko single loop se kro:::
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 0, 3, 12};
    // vector<int> store;

    for (int i = 0; i <= v.size(); i++)
    {
        if (v[i] == 0)
        {
            v[i] = v[i + 1];
        }
        else if (v[i] != 0)
        {
            v[i - 1] = v[i];
        }
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
}