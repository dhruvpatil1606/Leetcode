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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head==NULL || head->next==NULL || head->next->next==NULL) return {-1,-1};

        ListNode *first=head;
        ListNode *second=head->next->next;

        vector<int> vec;
        int index=2;

        while(second)
        {
            if(first->next->val<first->val && first->next->val<second->val)
            {
                vec.push_back(index);
            }
            else if(first->next->val>first->val && first->next->val>second->val)
            {
                vec.push_back(index);
            }

            index++;
            first=first->next;
            second=second->next;
        }

        if(vec.size()<=1) return {-1,-1};        
        
        int minDis=INT_MAX,maxDis=0;        

        for(int i=1,j=0; i<vec.size(); i++)
        {
            if(vec[i]-vec[j]<minDis) minDis=vec[i]-vec[j];
            if(vec[i]-vec[i-1]>maxDis) maxDis=vec[i]-vec[i-1];
            if(vec[i]-vec[j]>maxDis) maxDis=vec[i]-vec[j];
            if(vec[i]-vec[i-1]<minDis) minDis=vec[i]-vec[i-1];
        }
        
        return {minDis,maxDis};
    }
};