class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) 
    {
        // vector<vector<int>> vec (m,vector<int>n);

        vector<int> row(m);
        vector<int> col(n);

        // int I=0,J=0;
        // for(int i=0; i<indices.size(); i++)
        // {
        //     // I=indices[I][0];
        //     // J=indices[I][1];
        //     for(int j=0; j<indices[i].size(); j++)
        //     {
                
        //     }
        // }

        for(auto &it : indices )
        {
            row[it[0]]++;
            col[it[1]]++;
        }

        int count=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((row[i]+col[j])%2==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};