class Solution {
public:
    void sortColors(vector<int>& nums) {

        for(int i=0,j=0,k=nums.size()-1; j<=k; )
        {
            if(nums[j]==0)
            {
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;

                i++;
                j++;
            }
            else if(nums[j]==2)
            {
                int temp=nums[j];
                nums[j]=nums[k];
                nums[k]=temp;

                k--;
            }
            else
            {
                j++;
            }
        }
        
        
    }
};