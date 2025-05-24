// logarithmic_time.cpp
#include <iostream>
using namespace std;

int main() {
    int n = 32;
    int steps = 0;

    cout << "Reducing n by half each step until it becomes 0:\n";

    // Loop where n is divided by 2 in each step — O(log n)
    while (n > 0) {
        cout << "Step " << steps++ << ": n = " << n << endl;
        n /= 2;
    }

    return 0;
}
