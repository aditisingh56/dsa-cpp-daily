#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool isSwap = false;   // See, here tu ek i choose kar rahi hai with that i you enter inside loop
        for (int j = 0; j < n - i - 1; j++) { // the i chosen runs , likes compres with its adjavent elemts and at last the biggest element goes to last, after that agaio we need the second largest in the last second place so than we need to run the loop again than again outer loop runs 
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap)
            return;
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}