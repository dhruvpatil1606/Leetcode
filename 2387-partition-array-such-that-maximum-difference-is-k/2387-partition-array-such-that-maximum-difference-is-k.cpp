class Solution {
public:
    int partitionArray(std::vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());

        int count=0,start=0;
        for(int end=0; end<nums.size(); end++)
        {
            if((nums[end]-nums[start])<=k) continue;
            else{
                count++;
                start=end;
                
            }
        }
        if((nums[nums.size()-1]-nums[start])<=k) count++;
        return count;
    }
};