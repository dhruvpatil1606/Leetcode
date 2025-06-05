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
            // cout<<"\n\n"<<daigonal_sum<<"\t"<<count<<"\t"<<j<<"\t"<<index<<"\n\n";
            if(index>len) 
                break;
       }

        //making returning string s2
        for(int i=0; i<numRows; i++){
            for(int j=0; j<str[0].size(); j++)
            {
                if(str[i][j]!=0) s2=s2+str[i][j];
            }
            
        }

       return s2;
    }
};
