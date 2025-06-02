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
    bool hasCycle(ListNode *head) 
    {
        //with extra space......        

        // ListNode *ptr=head;
        // vector<ListNode*> vec;
        // while(ptr)
        // {
        //     for(int i=0; i<vec.size(); i++)
        //     {
        //         if(vec[i]==ptr)
        //         {
        //             return true;
        //         }                
        //     }
        //     vec.push_back(ptr);

        //     ptr=ptr->next;
        // }
        // return false;

        // without extra space......

        if(head==NULL || head->next==NULL) return false;                          
        
        ListNode *slow=head;
        ListNode *fast=head->next;

        //fast ans slow pointer
        
        while(slow!=fast)
        {
            if(fast==NULL || fast->next==NULL) return false;

            fast=fast->next->next;
            slow=slow->next;
        }
        return true;


        // based on address cheking

        // fast=fast->next;
        // while(slow!=NULL || fast!=NULL)
        // {            
        //     if(fast<=slow) return true;
        //     else{
        //         slow=slow->next;
        //         fast=fast->next;
        //     }

        //     if(fast==NULL) return false;
        // }

        // return false;
    }
};