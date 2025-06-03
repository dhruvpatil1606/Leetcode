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
    ListNode *detectCycle(ListNode *head) {

        if(head==NULL || head->next==NULL) return NULL;
        if(head->next==head) return head;

        ListNode *ptr=head;
        ListNode *ptr2=head->next;

        while(ptr2!=NULL)
        {
            if(ptr2<=ptr) return ptr2;
            ptr=ptr->next;
            ptr2=ptr2->next;
        }

        return NULL;
    }
};