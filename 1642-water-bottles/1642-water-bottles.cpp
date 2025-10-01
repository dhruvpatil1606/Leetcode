class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drinked_bottles=numBottles;
        
        while(numBottles>=numExchange)
        {
            int gain=numBottles/numExchange;
            int remain=numBottles%numExchange;

            numBottles=gain+remain;

            drinked_bottles+=gain;
        }

        return drinked_bottles;
    }
};