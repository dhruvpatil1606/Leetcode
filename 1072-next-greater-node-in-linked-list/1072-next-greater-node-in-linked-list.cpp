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
    vector<int> nextLargerNodes(ListNode* head) {

        ListNode *ptr=head;
        vector<int> ans;
        while(ptr->next)
        {
            ListNode *ptr2=ptr->next;
            while(ptr2)
            {
                if(ptr2->val>ptr->val)
                {
                    ans.push_back(ptr2->val);
                    break;
                }
                ptr2=ptr2->next;
            }
            if(ptr2==NULL) ans.push_back(0);
            ptr=ptr->next;
        }
        ans.push_back(0);
        return ans;
    }
};