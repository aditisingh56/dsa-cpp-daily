#include <iostream>
using namespace std;
class ArraySmallestAndLargest{
    public:
    void SmallestLargestInArray(){
        //  take an arrays input fro the user
        int n[5];
        cout << "Enter 5 integers: " << endl;
        for(int i =0; i < 5; i++){
            cin>>n[i];
        }
        int smallest = INT_MAX; // this is largest possible value for an integer, now when we compare any number with this it will be smaller
        int largest = INT_MIN; // this is smallest possible value for an integer, now when we compare any number with this it will be larger
        for(int i =0; i < 5; i++){
            if(n[i] < smallest){
                smallest = n[i];
            }
            if(n[i] > largest){
                largest = n[i];
            }
        }

        cout << "Smallest element is: " << smallest << endl;
        cout << "Largest element is: " << largest << endl;
    }
};
int main(){
    ArraySmallestAndLargest arrayDemo;
    arrayDemo.SmallestLargestInArray();
    return 0;
}