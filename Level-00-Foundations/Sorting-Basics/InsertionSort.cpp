#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > current) {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}
int main(){
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    InsertionSort(arr);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
// let me explain whats happenning here, so the Insertion Sort algorithm works by dividing the array into a sorted and an unsorted region. It iteratively takes elements from the unsorted region and inserts them into the correct position in the sorted region.
// we assume that first element of the array is by default sorted , and than we take the next element and insert it into the sorted region by shifting all larger elements one position to the right.