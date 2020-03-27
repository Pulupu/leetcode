import java.util.ArrayList;

/*
 * @lc app=leetcode id=53 lang=java
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
    public int maxSubArray(int[] nums) {
        int maxNow = nums[0];
        int maxIndexNow = nums[0];
        for (int i = 1; i < nums.length; i++) {
            maxIndexNow = Math.max(maxIndexNow + nums[i], nums[i]);
            maxNow = Math.max(maxNow, maxIndexNow);
        }
        return maxNow;
    }
}
// @lc code=end
