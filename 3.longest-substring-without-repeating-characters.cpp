/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int i = 0;
        int j = 0;
        set<char> hashtable;
        while (i < s.length() && j < s.length()) {
            if (hashtable.find(s[j]) == hashtable.end()) {
                hashtable.insert(s[j++]);
                ans = max(ans, j - i);
            }else{
                hashtable.erase(s[i++]);
            }
        }
        return ans;
    }
};
// @lc code=end

