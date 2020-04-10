/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            if (l1 != NULL) {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                carry += l2->val;
                l2 = l2->next;
            }
            current->next = new ListNode(carry % 10);
            current = current->next;
            carry /= 10;
        }
        return dummy->next;
    }
};
// @lc code=end

