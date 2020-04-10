/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> hashmap;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (hashmap.find(nums[i]) != hashmap.end()) {                
                hashmap.at(nums[i]) = hashmap.at(nums[i]) + 1;
            }else{
                hashmap.insert({nums[i], 1});
            }            
        }
        for (int i = 0; i < nums.size(); i++) {
            if (hashmap.at(nums[i]) == 1) {
                ans = nums[i];
                break;
            }
        }
        return ans;

        // bit manipulation
        // int a = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     a ^= i;
        // }
        // return a;
        
    }
};
// @lc code=end

