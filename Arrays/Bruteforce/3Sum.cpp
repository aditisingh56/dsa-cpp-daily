#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> uniqueTriplets;  // to store final unique triplets

    for (int i = 0; i < n; i++) {
        int target = -nums[i];        // b + c should equal -a
        set<int> s;                   // set to keep track of seen numbers

        for (int j = i + 1; j < n; j++) {
            int third = target - nums[j];  // c = -a - b

            if (s.find(third) != s.end()) {
                // We found a triplet: a, b, c
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());   // To avoid duplicate orders
                uniqueTriplets.insert(trip);      // Set removes duplicates
            }

            s.insert(nums[j]);  // Add current number to the set for future use
        }
    }

    // Convert set to vector for final output
    return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
}
int main() {
    vector<int> nums = {1, 0, -1, 2, 4, 0, -1, 1};
    vector<vector<int>> output = threeSum(nums);

    cout << "Triplets are:\n";
    for (auto triplet : output) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
