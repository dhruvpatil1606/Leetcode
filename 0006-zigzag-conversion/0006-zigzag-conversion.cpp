class Solution {
    
public:
    string convert(string s, int numRows) 
    {
        if(numRows==1) return s;

       string s2;
       vector<vector<char>> str(numRows,vector<char>(s.length(),0));
       int index=0,count=0,len=s.length()-1; //index for accessing s
       int rowindex=numRows-2,daigonal_sum=numRows-1;
        int j=count;
        int count2=0;
       while(1)
       {
            //1.
            for(int i=0; i<numRows; i++)
            {
                str[i][j]=s[index];
                index++;
                if(index>len) 
                    break;
            }
            if(index>len) 
                break;
            //2.
            for(int i=rowindex; i>0; i--)
            {
                for(int k=count+1; k<daigonal_sum; k++)
                {
                    if(i+k==daigonal_sum){
                        str[i][k]=s[index];
                        index++;
                    if(index>len) 
                        break;
                    }
                    
                }
                if(index>len) 
                    break;
            }
            count2+=1;
            j=daigonal_sum;
            count=j;
            daigonal_sum=daigonal_sum+(numRows-1);
            cout<<"\n\n"<<daigonal_sum<<"\t"<<count<<"\t"<<j<<"\t"<<index<<"\n\n";
            if(index>len) 
                break;
       }

        //printing for acknowledgement
        // for(int i=0; i<numRows; i++){
        //     for(int j=0; j<str[0].size(); j++)
        //     {
        //         cout<<str[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        //making returning string s2
        for(int i=0; i<numRows; i++){
            for(int j=0; j<str[0].size(); j++)
            {
                if(str[i][j]!=0) s2=s2+str[i][j];
            }
            cout<<"\n";
        }

       return s2;
    }
};

// class Solution {
// public:
//     string convert(string s, int numRows) {
//         if (numRows == 1) return s; 

//         vector<vector<char>> matrix(numRows, vector<char>(s.size(), ' ')); 
//         int row = 0, col = 0, direction = 1; 

//         for (char c : s) {
//             matrix[row][col] = c; 
//             row += direction; 

//             if (row == 0 || row == numRows - 1) {
//                 direction *= -1; 
//             }

//             col++; 
//         }

//         string result = "";
//         for (int i = 0; i < numRows; i++) {
//             for (int j = 0; j < s.size(); j++) {
//                 if (matrix[i][j] != ' ') {
//                     result += matrix[i][j];
//                 }
//             }
//         }

//         for(int i=0; i<matrix.size(); i++)
//         {
//             for(int j=0; j<matrix[i].size(); j++)
//             {
//                 cout<<matrix[i][j]<<" ";
//             }   
//         cout<<endl;
//         }

//         return result;
//     }
// };