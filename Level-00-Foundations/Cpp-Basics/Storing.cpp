#include <iostream>
using namespace std;
int main() {
    int arr[] = {10 , 20, 30, 40, 50};
    cout << arr<<endl; // this will print the base address of the array
    cout<<*arr<<endl; // this will print the first element of the array
    cout<<*(arr +1)<<endl; // this will print the second element of the array
    cout<<arr[2]<<endl; // this will print the third element of the array
     return 0;
}