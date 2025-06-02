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

        ListNode *ptr=node;        
        ptr=ptr->next;
        while(ptr->next)
        {
            node->val=ptr->val;
            ptr=ptr->next;
            node=node->next;
        }
        node->val=ptr->val;
        node->next=NULL;
    }
};