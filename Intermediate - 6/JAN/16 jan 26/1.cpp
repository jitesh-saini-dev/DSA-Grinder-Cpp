// leetcode - 1480

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//        vector<int> result;    
//         int sum = 0;
//         for (auto x : nums) {
//             sum += x;           
//             result.push_back(sum); 
//         }
//         return result;          
//     }
// };


// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//        vector<int> ans(nums.size());    
//         ans[0] = nums[0];
//         for (int i=1;i<nums.size();i++){
//             ans[i] = nums[i] + ans[i-1];
//         }
//         return ans;          
//     }
// };i8k986




// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         for (int i=1;i<nums.size();i++){
//             nums[i] = nums[i] + nums[i-1];
//         }
//         return nums;          
//     }
// };

// time complexity - O(n) bcz we are traversing the array only once.only one for loop is used.
// space complexity - O(1) bcz we are not using any extra space(vector,array , map,set etc) except variables.

// and what if we use extra space then space complexity will be O(n).
// bcz we are using an extra array/vector to store the result.