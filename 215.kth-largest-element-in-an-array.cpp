/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            if (pq.size() > nums.size() - k + 1) {
                pq.pop();
            }
        }
        
        return pq.top();
    }
};
// @lc code=end

