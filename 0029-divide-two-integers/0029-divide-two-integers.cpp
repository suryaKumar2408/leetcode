class Solution {
public:
    int divide(int dividend, int divisor) {

        // Handle integer overflow
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert to long long to handle INT_MIN safely
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long quotient = 0;

        while (a >= b) {

            long long value = b;
            long long count = 1;

            // Double the divisor until it exceeds the dividend
            while (a >= (value << 1)) {
                value <<= 1;
                count <<= 1;
            }

            // Subtract the largest possible multiple
            a -= value;

            // Add the corresponding power of 2
            quotient += count;
        }

        // Apply the sign
        if (negative)
            quotient = -quotient;

        return (int)quotient;
    }
};