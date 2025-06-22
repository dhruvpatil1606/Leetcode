class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        vector<string> ans;
        string temp="";                
        for(int i=0; i<s.length(); i++)
        {
            if(temp.length()<k)
            {
                temp=temp+s[i];                
            }
            else{
                ans.push_back(temp);                
                temp=s[i];                
            }
        }        
        while(temp.length()<k)
        {
            temp=temp+fill;
        }
        ans.push_back(temp);
        return ans;
    }
};