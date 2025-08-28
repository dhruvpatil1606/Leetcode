class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {

        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)  //printing vector
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        for(int i=0; i<grid.size(); i++) //daigonal and below part of matrix
        {
            vector<int> vec;
            int temp_index=i;
            for(int j=0; j<grid[0].size()-i; j++)
            {
                vec.push_back(grid[temp_index][j]);
                temp_index++;
            }
            sort(vec.begin(),vec.end(),greater<int>()); //descending order

            temp_index=i;
            for(int j=0; j<grid[0].size()-i; j++)
            {
                grid[temp_index][j]=vec[j];
                temp_index++;
            }
            
        }

        for(int i=0; i<grid.size()-1; i++) //upper daigonal matrix
        {
            vector<int> vec;
            int temp_index=0;
            for(int j=i+1; j<grid[0].size(); j++)
            {
                vec.push_back(grid[temp_index][j]);
                temp_index++;
            }
            sort(vec.begin(),vec.end()); //ascending order

            cout<<"Vector = ";
            for(int j=0; j<vec.size(); j++)
            {
                cout<<vec[j]<<" ";
            }
            cout<<endl;

            temp_index=0;
            int front=0;
            for(int j=i+1; j<grid[0].size(); j++)
            {
                grid[temp_index][j]=vec[front++];
                temp_index++;
            }
            
        }

        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)  //printing vector
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }

        return grid;
    }
};