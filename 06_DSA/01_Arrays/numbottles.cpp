class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drunk = numBottles;  // total bottles drunk
        int empty = numBottles;  // empty bottles after drinking
        
        while (empty >= numExchange) {
            empty -= numExchange; // use empty bottles for exchange
            numExchange++;        // next exchange requires more
            drunk++;              // got 1 new full bottle to drink
            empty++;              // drinking gives back 1 empty
        }
        
        return drunk;
    }
};
