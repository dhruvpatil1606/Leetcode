class Solution {
public:
    int findClosest(int x, int y, int z) {
        int count=0,count2=0;
        if(x<z){
            while(x!=z)
            {
                x++;
                count++;
            }
        }
        else{
            while(x!=z)
            {
                x--;
                count++;
            }
        }
        if(y>z){
            while(y!=z)
            {
                y--;
                count2++;
            }
        }
        else{
            while(y!=z)
            {
                y++;
                count2++;
            }
        }
        if(count==count2) return 0;
        return (count<count2)?1:2;
    }
};