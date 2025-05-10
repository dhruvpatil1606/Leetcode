class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int left=0, right=k-1;
        double sum=0;
        for(int i=0; i<k; i++)
        {
            sum+=nums[i];
        }
        double maxAvg=sum/k;
        int j=0;
        for(int i=k; i<nums.size(); i++)
        {
            sum=(sum+nums[i])-nums[j];
            j++;
            double avg=sum/k;
            if(avg > maxAvg){
            maxAvg = avg;}
        }
        return maxAvg;

    }
};