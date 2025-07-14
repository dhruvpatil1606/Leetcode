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
        vector<int> vec;

        while(head)
        {
            vec.push_back(head->val);
            head=head->next;
        }
        
        for(int i=0; i<vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;

        int Raise=0,ans=0;
        for(int i=vec.size()-1; i>=0; i--)
        {
            if(vec[i]==1)
            {
                ans=ans+pow(2,Raise);
            }
            Raise++;
        }
        
        
        return ans;
    }
};