class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {

        if(words[startIndex]==target) return 0;

        int minimumIndex=INT_MAX;

        int count=0;
        bool flag=false;

        //till right from starting index
        for(int i=startIndex; i<words.size(); i++)
        {
            if(target==words[i])
            {                
                flag=true;
                count++;
                break;
            }
            else{
                if(i==startIndex) continue;
                count++;
            }
        }
        //found?
        if(flag==true)
        {
            minimumIndex=count;
            cout<<minimumIndex<<" 1.\n";
            flag=false;
        }
        // if not found than left to right in addition of distance
        else{
            for(int i=0; i<startIndex; i++)
            {
                if(target==words[i])
                {
                    flag=true;
                    count++;
                    break;
                }
                else{                    
                    count++;
                }
            }
        }
        //found?
        if(flag==true)
        {
            minimumIndex=count;  
            cout<<minimumIndex<<" 2.\n";          
        }
        //doesn't exist
        else{
            if(minimumIndex==INT_MAX) return -1;
        }
        
        //reset distance and flag for further confirmation of minimum distance
        count=0;
        flag=false;

        //till left from starting index
        for(int i=startIndex; i>=0; i--)
        {
            if(target==words[i])
            {
                flag=true;
                count++;
                break;
            }
            else{
                if(i==startIndex) continue;
                count++;
            }
        }
        //found?
        if(flag==true){
            if(minimumIndex>count){
                minimumIndex=count;
                cout<<minimumIndex<<" 3.\n";
            }
        }
        //reverse from last, right to left , till starting index
        else{
            for(int i=words.size()-1; i>=startIndex; i--)
            {
                if(target==words[i])
                {
                    flag=true;
                    count++;
                    break;
                }
                else{                    
                    count++;
                }
            }
        }
        //found?
        if(flag==true){
            if(minimumIndex>count){
                minimumIndex=count;
                cout<<minimumIndex<<" 4.\n";
            }
        }

        return minimumIndex;        
    }
};