class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n; // Use long long to handle INT_MIN case
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }
        
        double ans = 1.0;
        while (exp > 0) {
            if (exp % 2 == 1) { // If the current power is odd
                ans *= x;
            }
            x *= x; // Square the base
            exp /= 2; // Halve the exponent
        }
        return ans;
    }
};
