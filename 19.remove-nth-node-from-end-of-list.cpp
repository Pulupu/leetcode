/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) {
            return NULL;
        }
        
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* deleted = slow->next;
        slow->next = slow->next->next;
        delete deleted;
        return dummy->next;
    }
};
// @lc code=end

