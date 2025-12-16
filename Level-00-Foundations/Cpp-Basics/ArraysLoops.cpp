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
        int smallestIndex = -1;
        int largestIndex = -1;
        for(int i =0; i < 5; i++){
            if(n[i] < smallest){
                smallest = n[i];
                smallestIndex = i;// this is for tracking the iundex 
            }
            if(n[i] > largest){
                largest = n[i];
                largestIndex = i;// this is for tracking the index 
            }
        }

        cout << "Smallest element is: " << smallest << " at index " << smallestIndex << endl;
        cout << "Largest element is: " << largest << " at index " << largestIndex << endl;
        // a shorter way of writing can be using implicit min and max function like
        //for (int i =0; i < 5; i++){
        //    smallest = min(smallest, n[i]);
        //    largest = max(largest, n[i]);
        //} 
    }
};
int main(){
    ArraySmallestAndLargest arrayDemo;
    arrayDemo.SmallestLargestInArray();
    return 0;
}