/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int left = 0;
        int right = 0;
        left = depth(root->left);
        right = depth(root->right);        
        return abs(left - right) <=1 && isBalanced(root->left) && isBalanced(root->right);
    }

    int depth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return max(depth(root->left), depth(root->right)) + 1;
    }
};
// @lc code=end

