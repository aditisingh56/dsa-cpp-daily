// constant_time.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int index = 2;

    // Accessing a specific index is done in constant time O(1)
    cout << "Element at index " << index << ": " << arr[index] << endl;

    return 0;
}
