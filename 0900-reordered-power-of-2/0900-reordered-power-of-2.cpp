class Solution {
public:
    bool reorderedPowerOf2(int n) {

        vector<vector<long>> vec={{1,2,4,8},{16, 32, 64},{128, 256, 512},{1024, 2048, 4096, 8192}
        ,{16384, 32768, 65536},{131072, 262144, 524288},{1048576, 2097152, 4194304, 8388608}
        ,{16777216, 33554432, 67108864},{134217728, 268435456, 536870912}
        ,{1073741824, 2147483648}};        

        unordered_map <int,int> n_frequency;
        while(n>0)
        {
            n_frequency[n%10]+=1;
            n/=10;
        }

        int size=0;
        for(auto &it:n_frequency)
        {
            cout<<it.first<<" ";
            size+=it.second;
        }
        cout<<"\n"<<size;

        cout<<"\n";
        for(int i=0; i<vec[size-1].size(); i++)
        {
            cout<<vec[size-1][i]<<" ";
            long temp=vec[size-1][i];
            unordered_map <int,int> temp_frequency; 
            while(temp>0)
            {
                temp_frequency[temp%10]+=1;
                temp/=10;
            }
            if(temp_frequency==n_frequency) return true;
        }
        
        return false;
    }
};