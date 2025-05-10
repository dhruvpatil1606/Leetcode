class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {

        int sum=0,len=0;
        int minLen=INT_MAX;
        
        //brute force
        // for(int i=0; i<nums.size(); i++)
        // {
        //     for(int j=i; j<nums.size(); j++)
        //     {
        //         if(sum>=target) break;
        //         sum+=nums[j];
        //         len++;
        //     }
        //     if(sum>=target) minLen=min(len,minLen);
        //     sum=0;
        //     len=0;
        // }
        
        // if(minLen!=INT_MAX) return minLen;
        // return 0;

        //2. sliding window
        
        int left=0;
        for(int right=0; right<nums.size(); right++)
        {
            sum+=nums[right];
            while(sum>=target)
            {
                if((right-left+1)<minLen)
                {
                    minLen=right-left+1;
                }
                sum-=nums[left];
                left++;
            }
        }

        return minLen!=INT_MAX?minLen:0;        
    }
};