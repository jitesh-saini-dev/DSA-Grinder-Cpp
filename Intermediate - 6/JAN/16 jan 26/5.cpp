// 1431. Kids With the Greatest Number of 

// Candies
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        for (auto x : candies) {
            if (x + extraCandies >= max_candies) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};