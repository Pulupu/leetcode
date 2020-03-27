import java.util.ArrayList;

/*
 * @lc app=leetcode id=22 lang=java
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList<String>();
        backtrack(ans, "", 0, 0, n);
        return ans;

    }

    public void backtrack(List<String> ans, String s, int open, int close, int max) {
        if (s.length() == max * 2) {
            ans.add(s);
            return;
        }
        if (open < max) {
            backtrack(ans, s + "(", open + 1, close, max);
        }
        if (close < open) {
            backtrack(ans, s + ")", open, close + 1, max);
        }
    }
}
// @lc code=end
