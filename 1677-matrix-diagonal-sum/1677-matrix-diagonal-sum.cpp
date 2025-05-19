class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0; i<mat.size(); i++)
        {
            // for(int j=0; j<mat[i].size(); j++)
            // {
                // if(i==j) 
                    sum+=mat[i][i];
                // if(i+j==mat.size()-1) 
                    sum+=mat[i][mat.size()-1-i];

            // }
        }

        if(mat.size()%2!=0)
        {
            sum=sum-mat[mat.size()/2][mat.size()/2];
        }

        return sum;
    }
};