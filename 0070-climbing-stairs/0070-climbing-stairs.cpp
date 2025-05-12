class Solution {
public:    
    int helper(int n,vector<int>& vec)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;

        if(vec[n]!=-1) return vec[n];
        
        vec[n]=helper(n-1,vec)+helper(n-2,vec);                

        return vec[n];                 
    }

    int climbStairs(int n) {

        vector<int> vec(n+1,-1);    

        return helper(n,vec);        
    }
};