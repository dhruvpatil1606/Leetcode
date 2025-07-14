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
    int getDecimalValue(ListNode* head) 
    {
        ListNode* ptr=head;
        int len=0;
        while(ptr)
        {
            len++;
            ptr=ptr->next;
        }

        int Raise=len-1,ans=0;
        ptr=head;
        while(ptr)
        {
            if(ptr->val==1)
            {
                ans=ans+pow(2,Raise);
            }
            ptr=ptr->next;
            Raise--;
        }
        
        return ans;
    }
};