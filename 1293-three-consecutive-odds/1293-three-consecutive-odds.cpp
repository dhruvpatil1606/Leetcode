class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3)
        {
            return false;
        }
        
        int x,y,z;

        for(int i=0; i<arr.size()-2; i++)
        {
            x=arr[i]^1;
            if(x==arr[i]-1)
            {
                y=arr[i+1]^1;
                if(y==arr[i+1]-1)
                {
                    z=arr[i+2]^1;
                    if(z==arr[i+2]-1)
                    {
                        return true;
                    }
                }
            }
            // if(i==arr.size()-3)
            // {
            //     break;
            // }
        }

    return false;
    }
};