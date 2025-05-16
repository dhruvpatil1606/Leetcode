class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) 
    {
        vector<int> vec;
        int curr=-1;
        for(int i=0; i<groups.size(); i++)
        {
            if(groups[i]!=curr)
            {
                vec.push_back(i);
                curr=groups[i];
            }
        }

        vector<string> ans;
        for(int i=0; i<vec.size(); i++)
        {
            ans.push_back(words[vec[i]]);
        }
        
        return ans;
    }
};