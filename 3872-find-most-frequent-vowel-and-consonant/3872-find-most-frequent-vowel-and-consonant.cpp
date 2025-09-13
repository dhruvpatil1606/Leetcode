class Solution {
public:
    int maxFreqSum(string s) 
    {
        // 1. solution with unordered_map 

        // unordered_map<char,int> mp_V;
        // unordered_map<char,int> mp_C;

        // for(int i=0; i<s.length(); i++)
        // {
        //     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        //     {
        //         mp_V[s[i]]+=1;
        //     }
        //     else{
        //         mp_C[s[i]]+=1;
        //     }
        // }

        // int maxFreq_C=0,maxFreq_V=0;
        // for(auto &it : mp_V)
        // {
        //     if(maxFreq_V<it.second) maxFreq_V=it.second;
        // }
        // for(auto &it : mp_C)
        // {
        //     if(maxFreq_C<it.second) maxFreq_C=it.second;
        // }

        // return maxFreq_C+maxFreq_V;

        //2. solution with direct access of array

        vector<int> vec(26,0);

        for(int i=0; i<s.length(); i++)
        {
            vec[s[i]-97]+=1;
        }

        int Vowel_count=0,Consonant_count=0;        

        for(int i=0; i<26; i++)
        {
            if(i==0 || i==4 || i==14 || i==8 || i==20)
            {
                if(Vowel_count<vec[i]) Vowel_count=vec[i];
            }
            else{
                if(Consonant_count<vec[i]) Consonant_count=vec[i];
            }
        }
        
        return Vowel_count+Consonant_count;
    }
};