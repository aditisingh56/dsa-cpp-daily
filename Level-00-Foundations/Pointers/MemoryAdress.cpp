#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Pointer to the first element of the array
    int* ptr = arr;

    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    }
    cout << endl;

    cout << "Array elements using pointer increment:" << endl;
    for (int* p = ptr; p < ptr + n; p++) {
        cout << *p << " "; // Accessing elements using pointer increment
    }
    cout << endl;

    return 0;
}