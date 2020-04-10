/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1);
        ans[0] = 1;
        for (int i = 0; i <= rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                ans[j] = ans[j] + ans[j-1];
            }            
        }
        return ans;
    }
};
// @lc code=end

