class Solution {
public:
    bool isValid(string word) 
    {
        if(word.length()<3) return false;

        bool vowel=false,consonant=false;
        for(int i=0; i<word.size(); i++)
        {
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o'
                || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' 
                || word[i]=='O' || word[i]=='U') vowel=true;
            else if((word[i]>='a' && word[i]<='z') ||
            (word[i]>='A' && word[i]<='Z')) consonant=true;
            
            if((word[i]>='0' && word[i]<='9') || (word[i]>='a' && word[i]<='z') ||
            (word[i]>='A' && word[i]<='Z'))
            {
                continue;
            }
            else return false;
        }
        if(vowel && consonant) return true;
        return false;
    }
};