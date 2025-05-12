class Solution {
public:
    vector<int> vec; // can not define size here
    
    Solution():vec(31,-1) {} //giving size to the vec
    
    int fib(int n) {

        if(n==0) return 0;
        if(n==1) return 1;

        if(vec[n]==-1)
            vec[n]=fib(n-1)+fib(n-2);
        else vec[n];
        
        return vec[n];
    }
};