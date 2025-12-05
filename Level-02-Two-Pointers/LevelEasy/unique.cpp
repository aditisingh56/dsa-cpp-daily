#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int>& nums) {
    int unique = 0;
    for (int num : nums) {
        unique ^= num; 
    }
    return unique;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Unique element is: " << findUnique(nums) << endl;
    return 0;
 }
