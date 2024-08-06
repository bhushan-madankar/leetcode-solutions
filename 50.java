class Solution {
    public double myPow(double x, int n) {
        if (n == 0) return 1.0;  // x^0 = 1
        if (n < 0) {
            x = 1 / x;  // If n is negative, invert x
            n = -n;     // Make n positive for further calculations
        }
        return myPowHelper(x, n);
    }

    private double myPowHelper(double x, int n) {
        if (n == 0) return 1.0; // Base case
        double half = myPowHelper(x, n / 2);
        if (n % 2 == 0) {
            return half * half; // If n is even
        } else {
            return half * half * x; // If n is odd
        }
    }
}
