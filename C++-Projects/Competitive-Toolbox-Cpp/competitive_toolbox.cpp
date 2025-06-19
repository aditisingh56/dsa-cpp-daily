#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void showMenu() {
    cout << "====== Competitive Toolbox ======\n";
    cout << "1. Max Subarray Sum (Kadane's)\n";
    cout << "2. Majority Element\n";
    cout << "3. Pair Sum Count\n";
    cout << "4. Reverse Array\n";
    cout << "5. Convert Number to Binary\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}
void kadanesAlgorithm() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int maxSum = arr[0], currSum = arr[0];
    for (int i = 1; i < n; ++i) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum Subarray Sum is: " << maxSum << "\n";
}
void findMajorityElement() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    // Boyer-Moore Voting 
    int count = 0, candidate = -1;
    for (int num : arr) {
        if (count == 0) candidate = num;
        count += (num == candidate) ? 1 : -1;
    }

    // Confirm majority
    count = 0;
    for (int num : arr) {
        if (num == candidate) count++;
    }

    if (count > n / 2) cout << "Majority Element is: " << candidate << "\n";
    else cout << "No Majority Element exists.\n";
}
#include <unordered_map>

void countPairSum() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << "Enter target sum K: ";
    cin >> k;

    unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        int complement = k - arr[i];
        if (freq.count(complement)) {
            count += freq[complement];
        }
        freq[arr[i]]++;
    }

    cout << "Number of pairs with sum " << k << ": " << count << "\n";
}


void reverseArray() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++; right--;
    }

    cout << "Reversed Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";
}
void numberToBinary() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Binary: ";
    for (int i = 31; i >= 0; --i) {
        cout << ((num >> i) & 1);
    }
    cout << "\n";
}
int main() {
    int choice;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                kadanesAlgorithm();
                break;
            case 2:
                findMajorityElement();
                break;
            case 3:
                countPairSum();
                break;
            case 4:
                reverseArray();
                break;
            case 5:
                numberToBinary();
                break;
            case 0:
                cout << "🔚 Exiting the toolbox. Goodbye!\n";
                break;
            default:
                cout << "⚠️ Invalid option. Please try again.\n";
        }

        cout << "\n-----------------------------------\n\n";
    } while (choice != 0);

    return 0;
}
