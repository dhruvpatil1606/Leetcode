class Solution {
public:
    int addDigits(int num) {

        // if(num/10<0) return num;

        // int number=0;
        // while(num>0)
        // {
        //     int rev=num%10;
        //     number+=rev;
        //     num/=10;
        // }
        // if(number>9) number=addDigits(number);
        
        // return number;

        if(num==0) return 0;

        return 1+(num-1)%9;
    }
};