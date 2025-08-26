class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) 
    {
        double max_daigonal=0,index=0;

        for(int i=0; i<dimensions.size(); i++)
        {
            double temp=max_daigonal;

            double temp2=sqrt((dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]));

            if(max_daigonal==temp2) 
            {
                int mul1=dimensions[i][0]*dimensions[i][1];
                int mul2=dimensions[index][0]*dimensions[index][1];

                if(mul1>mul2) 
                {
                    index=i;                
                    continue;
                }
            }
            
            if(max_daigonal<temp2) max_daigonal=temp2;        

            if(temp!=max_daigonal) index=i;
        }
        
        return dimensions[index][0]*dimensions[index][1];
    }
};