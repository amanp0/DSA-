class Solution {
public:
    int divide(int dividend, int divisor) {
        // Case 1: division by zero
        if (divisor == 0) return INT_MAX; // or handle as required

        // Case 2: overflow
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX; 

        return dividend / divisor; 
    }
};
