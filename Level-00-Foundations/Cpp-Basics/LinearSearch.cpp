#include <iostream>
using namespace std;
class LinearSearch {
    public:
    int search ( int arr[], int n, int key ) // see how you take array as input in function
    {
        for ( int i = 0; i < n; i++ ) {
            if ( arr[i] == key ) {
                return i; // return the index if key is found
            }
        }
        return -1; // return -1 if key is not found
    }
}; 
int main(){
    LinearSearch ls;
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    int result = ls.search(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}