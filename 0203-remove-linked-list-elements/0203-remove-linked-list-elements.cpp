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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;        

        while(head->val==val)
        {
            if(head->next==NULL)
            {
                return NULL;
            }
            head=head->next;
        }
        
        ListNode *ptr=head;

        while(ptr)
        {            
            if(ptr->next==NULL)
            {
                return head;
            }

            if(ptr->next->val!=val)
            {
                ptr=ptr->next;
            }
            else if (ptr->next->val==val && ptr->next->next==NULL)
            {
                ptr->next=NULL;
            }
            else
            {
                ListNode *temp=ptr;
                temp=temp->next;
                while(temp->val==val)
                {
                    if(temp->next==NULL)
                    {
                        break;
                    }
                    temp=temp->next;
                }
                ptr->next=temp;                
            }

        }

        return head;
    }
};