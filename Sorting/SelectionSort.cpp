#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) { // here, we take first element from the array and assume that this is the samllest elemnt of the array.
        int smallIdx = i;
        for (int j = i + 1; j < n; j++) {// we start the loop from i+1 as we already assume first elemnt is smallest so we start with index 1, compare if smallest is smallest or 1st is smallest, if current is bigger than we swap them 
            if (arr[j] < arr[smallIdx])
                smallIdx = j;
        }
        swap(arr[i], arr[smallIdx]); // it is like we divide array in two parts, ion starting ehole array is unosrted than after first comparision (after first iteratuo ) the smallest come sin starting , so that become sthe sorted part rest all become sthe unsorted part./ so from the unsorted part, we choose the smallest nu,ber and than put in last of sorted.
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    SelectionSort(arr, arr.size());
    for (int x : arr) cout << x << " ";
    return 0;
}
