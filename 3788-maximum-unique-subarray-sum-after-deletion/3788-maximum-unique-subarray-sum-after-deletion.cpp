class Solution {
public:
    int maxSum(vector<int>& nums) 
    {
        unordered_set <int> st;
        vector<int> vec;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0) st.insert(nums[i]);
            if(nums[i]<=0) vec.push_back(nums[i]);
        }
        int sum=0;
        for(auto &it:st)
        {
            sum+=it;
        }

        if(st.size()<=0)
        {
            sort(vec.begin(),vec.end());
            return vec[vec.size()-1];
        }

        return sum;
    }
};