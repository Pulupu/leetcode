/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        DFS(ans, root, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }
    void DFS(vector<vector<int>> &ans, TreeNode* node, int level) {
        if (!node) {
            return;
        }
        if (level >= ans.size()) {
            ans.push_back({});
        }
        ans[level].push_back(node->val);
        DFS(ans, node->left, level+1);
        DFS(ans, node->right, level+1);
    }
};
// @lc code=end

