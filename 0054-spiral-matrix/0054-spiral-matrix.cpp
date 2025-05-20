class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> vec;
        int startR=0,endR=matrix.size()-1,startC=0,endC=matrix[0].size()-1;
        int count=matrix.size()*matrix[0].size();
        cout<<count<<endl<<endl;
        for(int i=0; i<=matrix.size()/2; i++)
        {       
            // cout<<"→ ";     
            for(int j=startR; j<matrix[i].size()-i; j++)
            {
                vec.push_back(matrix[i][j]);
                // cout<<matrix[i][j]<<" ";
                count--;
            }
            if(count==0) break;
            // cout<<"↓ ";
            startR++;
            for(int j=startR,k=endC; j<matrix.size()-i; j++)
            {
                vec.push_back(matrix[j][k]);
                // cout<<matrix[j][k]<<" ";
                count--;
            }
            if(count==0) break;
            // cout<<"← ";
            endC--;            
            for(int j=endC,k=endR; j>startC-1; j--)
            {
                vec.push_back(matrix[k][j]);
                // cout<<matrix[k][j]<<" ";
                count--;
            }
            if(count==0) break;
            startC++;
            // cout<<"↑ ";
            endR--;
            for(int j=endR,k=i; j>i; j--)
            {
                vec.push_back(matrix[j][k]);
                // cout<<matrix[j][k]<<" ";
                count--;
            }
            if(count==0) break;
        }
        return vec;
    }
};