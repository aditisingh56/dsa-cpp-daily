#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;
        int currentAltitude = 0;

        for (int g : gain) {
            currentAltitude += g;
            maxAltitude = max(maxAltitude, currentAltitude);
        }

        return maxAltitude;
    }
};

int main() {
    Solution solution;

    // Example testcase:
    vector<int> gain = {-5, 1, 5, 0, -7};
    cout << "Highest altitude: " << solution.largestAltitude(gain) << endl;  // Output: 1, 1 + 5 = 6

    return 0;
}
