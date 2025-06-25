#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int> arr, int target) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                result.push_back(arr[i]);
                result.push_back(arr[j]);
            }
        }
    }
    return result;
}
int main() {
    vector<int> arr = {2 , 7 , 11,15};
    int target = 9;
    vector<int> result = pairsum(arr, target);
    if (result.size() == 0) {
        cout << "No pairs found" << endl;
    } else {
        cout << "Pairs with sum " << target << ": ";
        for (int i = 0; i < result.size(); i += 2) {
            cout << "(" << result[i] << ", " << result[i + 1] << ") ";
        }
        cout << endl;
    }
    return 0;
}