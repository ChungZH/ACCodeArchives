// [237. 删除链表中的节点] https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
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
    void deleteNode(ListNode* node)
    {
        int val = node->next->val;
        ListNode* next = node->next->next;
        delete node->next;
        node->val = val;
        node->next = next;
    }
};