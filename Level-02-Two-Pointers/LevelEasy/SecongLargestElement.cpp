#include <iostream>
#include <limits.h> 
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 8, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN || second == 0)
        cout << "There is no second largest element." << endl;
    else
        cout << "Second largest element is: " << second << endl;

    return 0;
}
