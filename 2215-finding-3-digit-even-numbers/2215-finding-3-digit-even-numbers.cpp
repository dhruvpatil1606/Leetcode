class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) 
    {
        unordered_set<int> store;

        int n=digits.size();

        for(int i=0; i<n; i++)
        {
            if(digits[i]==0) continue;
            int number=digits[i];
            for(int j=0; j<n; j++)
            {
                if(i==j) continue;
                number=number*10+digits[j];
                for(int k=0; k<n; k++)
                {
                    if(i==k || j==k ) continue;
                    number=number*10+digits[k];

                    if(number%2==0) store.insert(number);

                    number/=10;
                }
                number/=10;
            }
            number/=10;
        }

        vector<int> ans;

        for(auto &it: store)
        {
            ans.push_back(it);
        }

        sort(ans.begin(),ans.end());

        return ans;
    }
};