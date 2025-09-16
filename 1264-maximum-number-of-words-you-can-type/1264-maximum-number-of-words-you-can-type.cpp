class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        int total_worlds=0;
        for(int i=0; i<text.length(); i++)
        {
            if(text[i]==' ')
            {
                total_worlds++;
            }
        }

        vector<int> vec(26,0);

        for(int i=0; i<brokenLetters.length(); i++)
        {
            vec[brokenLetters[i]-'a']=1;
        }
        // for(int i=0; i<vec.size(); i++)
        // {
        //     cout<<vec[i]<<" ";
        // }


        total_worlds++; //atleast one word

        // int written_words=0;
        bool flag=false;
        for(int i=0; i<text.length(); i++)
        {
            if(flag==true && text[i]!=' ') continue;
            if(text[i]==' ')
            {
                flag=false;
                continue;
            }
            else if(vec[text[i]-'a']==1)
            {
                total_worlds--;
                flag=true;
            }
            else{
                continue;
            }
        }

        return total_worlds;
        
    }
};