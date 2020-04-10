/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int minPrice = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            if (minPrice > prices[i]) {
                minPrice = prices[i];
            }else if (max < prices[i] - minPrice) {
                max = prices[i] - minPrice;
            }            
        }
        return max;
    }
};
// @lc code=end

