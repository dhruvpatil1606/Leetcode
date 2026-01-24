class Solution {
public:
    int minPairSum(vector<int>& nums) {

        vector<int> vec;

        sort(nums.begin(),nums.end());

        int j=nums.size()-1;
        for(int i=0; i<nums.size()/2; i++)
        {
            vec.push_back(nums[i]+nums[j]);
            j--;
        }

        sort(vec.begin(),vec.end());

        return vec[vec.size()-1];
    }
};