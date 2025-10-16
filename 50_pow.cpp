class Solution {
public:
    double myPow(double x, int n) {
        return helper(x, n);
    }

private:
    double helper(double x, long long n) {
        if (n == 0) {
            return 1.0;
        }

        if (n < 0) {
            return 1.0 / helper(x, -n);
        }

        double half = helper(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};
