class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        for(int i=0; i<9; i++)
        {
            unordered_map<int,int> rows;

            for(int j=0; j<9; j++)
            {
                if(board[i][j]=='.') continue;
                rows[board[i][j]]+=1;
                int index=board[i][j];
                if(rows[index]>1) return false;                      
            }
        }
        for(int i=0; i<9; i++)
        {
            unordered_map<int,int> cols;

            for(int j=0; j<9; j++)
            {
                if(board[j][i]=='.') continue;
                cols[board[j][i]]+=1;
                int index=board[j][i];
                if(cols[index]>1) return false;        
            }
        }

        int si=0,ei=2;
        int sj=0,ej=2;
        while(1)
        {
            unordered_map<int,int> matrices;
            for(int i=si; i<=ei; i++)
            {
                for(int j=sj; j<=ej; j++)
                {
                    if(board[i][j]=='.') continue;
                    matrices[board[i][j]]+=1;
                    int index=board[i][j];
                    if(matrices[index]>1) return false;        
                }            
            }
            
            sj=ej+1;
            ej=sj+2;
            
            if(sj>8)
            {
                si=ei+1;
                ei=si+2;

                sj=0;
                ej=2;
            }
            //cout<<"i= "<<si<<" "<<ei<<"     j="<<sj<<" "<<ej<<endl;
            if(si>8) break;
        }

        return true;
    }
};