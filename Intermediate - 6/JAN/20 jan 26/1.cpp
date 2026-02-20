//---------map------------

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         map<int, int> m;
//         vector<int> v;
//         for (auto x : nums) {
//             m[x]++;
//         }
//         for (auto x : m) {
//             if (x.second > 1) {
//                 v.push_back(x.first);
//             }
//         }
//         return v;
//     }
// };


// -----------brute force two for loop------------

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> v;
//         // sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[j] == nums[i]) {
//                     v.push_back(nums[i]);
//                 }
//             }
//         }
//         return v;
//     }
// };


// -----------set--------------------------------------------

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> ans;
//         set<int> dup;

//         for (int x : nums) {
//             if (dup.count(x))
//                 ans.push_back(x);
//             else
//                 dup.insert(x);
//         }
//         return ans;
//     }
// };



// ------------sorting----------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> v;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
        {
            v.push_back(nums[i]);
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
}
