class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int no=-1;        
        
        // for(int i=0; i<nums.size()-1; i++)
        // {
        //     for(int j=i+1; j<nums.size(); j++)
        //     {
        //         if(nums[i]<nums[j])
        //         {
        //             no=max(no,nums[j]-nums[i]);
        //         }
        //     }
        // }
        // return no;

        int left=0,right=1;        
        while(left<nums.size()-1)
        {
            if(nums[left]<nums[right])
            {
                no=max(no,nums[right]-nums[left]);
            }
            else
            {
                left=right;
            }
            right++;
            if(right==nums.size())
            {
                left++;
                right=left+1;
            }
        }
        return no;
    }
};