class Solution {
public:

    int countSubsets(int idx, int currOr, vector<int>& nums, int maxOr)
    {
        if(idx==nums.size()){
            if(currOr==maxOr)
            {
                return 1;
            }
            return 0;
        }
        
        //take count
        int takeCount=countSubsets(idx+1,currOr|nums[idx],nums,maxOr);

        //don't take count
        int notTakeCount=countSubsets(idx+1,currOr,nums,maxOr);

        return takeCount+notTakeCount;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        
        int maxOr=0; //maximum possible bitwise OR of a subset
        for(int i=0; i<nums.size(); i++)
        {
            maxOr=maxOr|nums[i];
        }

        int currOr=0;

        return countSubsets(0,currOr,nums,maxOr);
    }
};