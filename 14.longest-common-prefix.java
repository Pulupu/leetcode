/*
 * @lc app=leetcode id=14 lang=java
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) {
            return "";
        }
        String result = "";
        int shortest_len = 99999999;
        int shortest_index = 0;
        for (int i = 0; i < strs.length; i++) {
            if (shortest_len > strs[i].length()) {
                shortest_len = strs[i].length();
                shortest_index = i;
            }
        }

        for (int i = 0; i < shortest_len; i++) {
            for (int j = 0; j < strs.length; j++) {
                if (strs[shortest_index].charAt(i) != strs[j].charAt(i)) {
                    return result;
                }
            }
            result += strs[shortest_index].charAt(i);
        }
        return result;
    }
}
// @lc code=end
