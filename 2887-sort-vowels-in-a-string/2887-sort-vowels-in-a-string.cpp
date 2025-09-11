class Solution {
public:
    string sortVowels(string s) {
        vector<char> vec;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a'
            || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                vec.push_back(s[i]);
            }
        }
        sort(vec.begin(),vec.end());        

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a'
            || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                s[i]=vec.front();
                vec.erase(vec.begin());
            }
        }

        return s;
    }    
};