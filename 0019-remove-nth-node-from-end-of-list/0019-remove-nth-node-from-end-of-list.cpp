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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        {
            return head;
        }                

        ListNode* tail=head;
        int count=0;

        while(tail)
        {
            tail=tail->next;
            count++;
        }
        int len=count;
        cout<<len<<endl;

        if(count==n)
        {
            return head->next;
        }

        if(len==n && len==1)
        {
            return NULL;   
        }

        count=count-n;
        n=count;
        count=0;
        cout<<n<<endl;


        // ListNode* ptr=head;

        // while(ptr)
        // {
            // if(count==0 && n==0)
            // {
            //     head=head->next;
            //     return head;
            // }
            // if(count==n-1)
            // {
            //     ptr->next=ptr->next->next;
            // }
            // else{
            //     ptr=ptr->next;
            // }
            // count++;
        // }

        

        ListNode *temp=head;
        int index=n-1;
        while(index>0)
        {
            temp=temp->next;
            index--;
        }
        temp->next=temp->next->next;


        return head;
    }
};