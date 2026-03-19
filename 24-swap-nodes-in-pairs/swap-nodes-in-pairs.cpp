/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode *ptr=head;
        ListNode *ptr2=head->next;

        while(ptr2->next!=NULL)
        {
            int temp=ptr->val;
            ptr->val=ptr2->val;
            ptr2->val=temp;

            ptr=ptr2->next;
            if(ptr->next!=NULL)
            {
                ptr2=ptr->next;
            }
            else{
                break;
            }
        }

        if(ptr<ptr2){
            int temp=ptr->val;
            ptr->val=ptr2->val;
            ptr2->val=temp;
        }

        return head;
    }
};