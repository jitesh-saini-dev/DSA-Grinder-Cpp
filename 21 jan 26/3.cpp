// print all subarrays of an array

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i; j < v.size(); j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << v[k] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

//----------------time limt exceeded--------------------
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int ans = INT_MIN;
//         for (int i = 0; i < nums.size(); i++) {
//             int sum = 0;

//             for (int j = i; j < nums.size(); j++) {
//                 sum += nums[j];
//                 ans = max(ans, sum);
//             }
//         }
//         return ans;
//     }
// };

//----------------kadane's algorithm--------------------
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSoFar = nums[0];
//         int currMax = nums[0];
//         for (int i = 1; i < nums.size(); i++) {
//             currMax = max(nums[i], currMax + nums[i]);
//             maxSoFar = max(maxSoFar, currMax);
//         }
//         return maxSoFar;
//     }
// };
