class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int,int> mp;

        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]+=1;
        }

        int max_frequency = 0;

        for(auto &it: mp)
        {
            if(it.second>max_frequency)
            {
                max_frequency=it.second;
            }
        }

        int count=0;
        for(auto &it: mp)
        {
            if(it.second==max_frequency)
            {
                count+=it.second;
            }
        }
        return count;
    }
};