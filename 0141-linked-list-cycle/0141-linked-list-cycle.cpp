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

        ListNode *slow=head;
        ListNode *fast=head;

        if(slow==NULL) return false;
        // if(fast->next==fast) return true;   
        if(fast->next==NULL) return false;        
        // if(fast->next->next==slow) return true;   

        // while(slow!=fast)
        // {
        //     if(slow==NULL || fast==NULL) return false;

        //     fast=fast->next->next;
        //     slow=slow->next;

        //     // int slow_add=slow-fast;
        //     // int fast_add=fast-slow;

        //     // if(fast==slow) return true;
        //     // else if(fast_add<slow_add) return false;
        //     // else return true;
        // }
        // return true;

        fast=fast->next;
        while(slow!=NULL || fast!=NULL)
        {            
            if(fast<=slow) return true;
            else{
                slow=slow->next;
                fast=fast->next;
            }

            if(fast==NULL) return false;
        }

        return false;
    }
};