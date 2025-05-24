// quadratic_time.cpp
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    cout << "All pairs (i, j) where i and j range from 0 to " << n - 1 << ":\n";

    // Nested loop — O(n²)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << ", " << j << ") ";
        }
        cout << endl;
    }

    return 0;
}
