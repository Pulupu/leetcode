/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int minOne = min(height[left], height[right]);
            ans = max(ans, minOne * (right - left));
            if (height[left] < height[right]) {
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};
// @lc code=end

