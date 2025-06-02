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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode *ptr=headA;
        ListNode *ptr2=headB;

        if(ptr==NULL || ptr2==NULL ) return NULL;

        while(ptr!=NULL && ptr2!=NULL && ptr!=ptr2)
        {
            ptr=ptr->next;
            ptr2=ptr2->next;

            if(ptr==ptr2) return ptr;
           
            if(ptr==NULL) ptr=headB;
            if(ptr2==NULL) ptr2=headA;
        }

        return ptr;        
    }
};