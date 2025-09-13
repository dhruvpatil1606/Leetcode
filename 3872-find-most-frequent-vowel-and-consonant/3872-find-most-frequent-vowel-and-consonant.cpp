class Solution {
public:
    int maxFreqSum(string s) 
    {
        unordered_map<char,int> mp_V;
        unordered_map<char,int> mp_C;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                mp_V[s[i]]+=1;
            }
            else{
                mp_C[s[i]]+=1;
            }
        }

        int maxFreq_C=0,maxFreq_V=0;
        for(auto &it : mp_V)
        {
            if(maxFreq_V<it.second) maxFreq_V=it.second;
        }
        for(auto &it : mp_C)
        {
            if(maxFreq_C<it.second) maxFreq_C=it.second;
        }

        return maxFreq_C+maxFreq_V;
    }
};