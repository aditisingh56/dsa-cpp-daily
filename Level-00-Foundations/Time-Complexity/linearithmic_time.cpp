// linearithmic_time.cpp
#include <iostream>
using namespace std;

// Example function that does O(log n) work for each of the n elements
void linearithmicOperation(int n) {
    for (int i = 1; i <= n; i++) {
        int x = n;
        while (x > 1) {
            // Simulating log(n) operations
            x /= 2;
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    int n = 8;
    cout << "Demonstrating O(n log n) time complexity with n = " << n << ":\n";
    linearithmicOperation(n);
    return 0;
}
