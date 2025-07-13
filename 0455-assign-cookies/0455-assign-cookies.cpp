class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int full_filled=0,j=0;

        if(s.size()==0) return full_filled;

        for(int i=0; i<g.size(); i++)
        {
            if(g[i]<=s[j])
            {
                full_filled++;
                j++;                
            }
            else{
                i--;
                j++;
            }
            // j++;
            if(j>s.size()-1) break;
        }
        return full_filled;
    }
};