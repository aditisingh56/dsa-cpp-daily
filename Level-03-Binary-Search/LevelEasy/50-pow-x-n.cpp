// LeetCode Problem 50: Pow(x, n)
// Difficulty: Medium
// Topic: Math / Binary Exponentiation
// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
// Time Complexity: O(log n)
// Space Complexity: O(1)
#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long binary_form = n;
        if (n < 0) {
            x = 1 / x;
            binary_form = -binary_form;
        }

        while (binary_form > 0) {
            if (binary_form % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binary_form /= 2;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    double x = 2.0;
    int n = 10;
    cout << "Result: " << sol.myPow(x, n) << endl;
    return 0;
}
