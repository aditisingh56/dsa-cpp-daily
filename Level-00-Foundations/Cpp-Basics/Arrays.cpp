#include <iostream>
using namespace std;
class ArrayDemo{
    public:
    void demonstrateArray(){
        // Declare an array of integers
        int numbers[5] = {10, 20, 30, 40, 50};


        // Access
        cout << "Array elements are: " << endl;
        int n = sizeof(numbers)/sizeof(numbers[0]);
        for(int i = 0; i < n; i++){
            cout << "Element at index " << i << ": " << numbers[i] << endl;
        }
}
};
int main(){
    ArrayDemo arrayDemo;
    arrayDemo.demonstrateArray();
    return 0;
}