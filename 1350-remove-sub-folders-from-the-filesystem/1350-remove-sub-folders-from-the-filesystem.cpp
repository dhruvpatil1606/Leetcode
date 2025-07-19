class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) 
    {
        vector<string> vec;        

        sort(folder.begin(),folder.end());

        int index=0;
        vec.push_back(folder[0]);

        for(int i=1; i<folder.size(); i++)
        {                    
            if(folder[i].substr(0,folder[index].length())==folder[index])
            {
                if(folder[i].substr(folder[index].length(),1)!="/")
                {
                    index=i;
                    vec.push_back(folder[index]);    
                    
                }
                continue;
            }
            else{
                index=i;
                vec.push_back(folder[index]);
            }
        }
        
        return vec;
    }
};