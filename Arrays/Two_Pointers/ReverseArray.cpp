#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int start =0;
    int n=arr.size() - 1;
    int end = n;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    cout << "Reversed array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}