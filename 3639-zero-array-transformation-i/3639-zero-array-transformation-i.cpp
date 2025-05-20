class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) 
    {

        // 1st solution TLE

        // for(int i=0; i<queries.size(); i++)
        // {
        //     int start=queries[i][0];
        //     int end=queries[i][1];

        //     while(start<=end)
        //     {
        //         if(nums[start]==0)
        //         {
        //             start++;    
        //             continue;                
        //         }
        //         if(nums[start]>0)
        //         {
        //             nums[start]-=1;
        //             start++;
        //         }
        //     }
        // }
        
        // for(int i=0; i<nums.size(); i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         return false;
        //     }
        // }
        // return true;

        // 2nd solution 

        vector<int> diff(nums.size() + 1, 0);
        for (const auto& q : queries) {
            diff[q[0]]++; // diff[l]++
            if (q[1] + 1 < nums.size())
                diff[q[1] + 1]--; // diff[r + 1]--
        }

        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt += diff[i];
            if (nums[i] > cnt)
                return false;
        }
        return true;
    }
};