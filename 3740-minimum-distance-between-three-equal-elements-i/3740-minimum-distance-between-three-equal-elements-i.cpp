class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        vector<vector<int>> vec;

        unordered_set<int> st;

        for(int i=0; i<nums.size(); i++)
        {
            int temp=nums[i];
            auto it=st.find(temp);
            if(it != st.end())
            {
                continue;
            }
            else{
                st.insert(temp);
            }
            vector<int> vecTemp;
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[j]==temp)
                {
                    vecTemp.push_back(j);
                }
            }
            vec.push_back(vecTemp);
        }        

        int minDistance=INT_MAX;

        bool flag=false;        

        for(int i=0; i<vec.size(); i++)
        {
            int tempDistance;
            
            sort(vec[i].begin(),vec[i].end());
            
            if(vec[i].size()>2)
            {
                for(int j=0; j<vec[i].size()-2; j++)
                {
                    tempDistance=abs(vec[i][j]-vec[i][j+1])+abs(vec[i][j+1]-vec[i][j+2])+abs(vec[i][j+2]-vec[i][j]);
                    if(tempDistance<minDistance) minDistance=tempDistance;
                }
                flag=true;
            }
            else continue;
            
            
        }

        // for(int i=0; i<vec.size(); i++)
        // {
        //     int tempDistance;
            
        //     sort(vec[i].rbegin(),vec[i].rend());
            
        //     if(vec[i].size()>2)
        //     {
        //         tempDistance=abs(vec[i][0]-vec[i][1])+abs(vec[i][1]-vec[i][2])+abs(vec[i][2]-vec[i][0]);
        //         flag=true;
        //     }
        //     else continue;
            
        //     if(tempDistance<minDistance) minDistance=tempDistance;
        // }

        for(int i=0; i<vec.size(); i++)
        {
            for(int j=0; j<vec[i].size(); j++)
            {
                cout<<vec[i][j]<<" ";
            }
            cout<<"\n";
        }

        if(flag==false) return -1;

        return minDistance;
    }
};