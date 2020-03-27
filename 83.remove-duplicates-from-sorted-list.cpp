/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = head;
        while(dummy != NULL && dummy->next != NULL){
            if (dummy->val == dummy->next->val) {
                dummy->next = dummy->next->next;
            }else{
                dummy = dummy->next;
            }            
        }
        return head;
    }
};
// @lc code=end

