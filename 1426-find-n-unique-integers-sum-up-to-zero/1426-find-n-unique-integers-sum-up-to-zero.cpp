class Solution {
public:
    vector<int> sumZero(int n) 
    {
        int half=n/2;

        vector<int> vec;

        int negative=-1,positive=1;
        while(half>0)
        {
            vec.push_back(negative--);
            half--;
        }        
        half=n/2;
        while(half>0)
        {
            vec.push_back(positive++);
            half--;
        }
        if(n%2==1) vec.push_back(0);

        return vec;
    }
};