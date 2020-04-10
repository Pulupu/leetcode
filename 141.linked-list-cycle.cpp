/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        set<ListNode*> hashmap;
        
        while (head != NULL) {
            if (hashmap.find(head) == hashmap.end()) {
                hashmap.insert(head);
            }else {
                return true;
            }
            head = head->next;
        }
        return false;
    }
};
// @lc code=end

