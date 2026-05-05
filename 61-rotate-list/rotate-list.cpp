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
    ListNode* rotateRight(ListNode* head, int k) {

        if(k==0) return head;

        ListNode *ptr=head;

        int length=0;
        while(ptr)
        {
            length++;
            ptr=ptr->next;
        }

        cout<<length<<endl;
        if(length==0 || k%length==0) return head;

        ptr=head;
        // ListNode *swap=head;

        int remain=k%length;
        cout<<remain<<endl;
        while(remain!=0)
        {
            int value=head->val;
            int nextValue;
            while(ptr->next)
            {
                nextValue=ptr->next->val;
                cout<<ptr->val<<" ";
                ptr=ptr->next;
                ptr->val=value;

                value=nextValue;
            }
            head->val=nextValue;
            cout<<head->val<<"\n";
            ptr=head;
            remain--;
        }
        
        return head;
    }
};