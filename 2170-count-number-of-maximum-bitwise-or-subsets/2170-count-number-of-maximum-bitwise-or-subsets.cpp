class Solution {
public:

    int countSubsets(int idx, int currOr, vector<int>& nums, int maxOr, vector<vector<int>>& t)
    {
        if(idx==nums.size()){
            if(currOr==maxOr)
            {
                return 1; //found one subset
            }
            return 0;
        }

        if(t[idx][currOr]!=-1){
            return t[idx][currOr];
        }
        
        //take count
        int takeCount=countSubsets(idx+1,currOr|nums[idx],nums,maxOr,t);

        //don't take count
        int notTakeCount=countSubsets(idx+1,currOr,nums,maxOr,t);

        return t[idx][currOr]=takeCount+notTakeCount;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        
        int maxOr=0; //maximum possible bitwise OR of a subset
        for(int i=0; i<nums.size(); i++)
        {
            maxOr=maxOr|nums[i];
        }

        int currOr=0;
        vector<vector<int>> t(nums.size()+1,vector<int>(maxOr+1,-1));
        return countSubsets(0,currOr,nums,maxOr,t);
    }
};