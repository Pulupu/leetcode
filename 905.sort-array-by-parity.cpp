/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> ans;

        for (int i = 0; i < A.size(); i++) {
            if (A[i] % 2 == 0) {
                ans.push_back(A[i]);
            }
        }
        for (int i = 0; i < A.size(); i++) {
            if (A[i] % 2 == 1) {
                ans.push_back(A[i]);
            }
        }
        return ans;
    }
};
// @lc code=end

