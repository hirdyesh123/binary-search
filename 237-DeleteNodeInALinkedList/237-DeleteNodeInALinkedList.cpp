// Last updated: 7/28/2026, 9:57:31 PM
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
    void deleteNode(ListNode* node) {
           node->val=(node->next)->val;
          node->next= node->next->next;
        
    }
};