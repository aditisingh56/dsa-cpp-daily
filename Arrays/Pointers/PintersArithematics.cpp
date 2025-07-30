#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << "Value of a: " << *ptr1 << endl;
    cout << "Value of b: " << *ptr2 << endl;

    // Pointer arithmetic
    ptr1++;
    ptr2++;
    cout<<"Beofre values: "<<*ptr1<<" "<<*ptr2<<endl;

    cout << "Value of a after incrementing pointer: " << ptr1 << endl;
    cout << "Value of b after incrementing pointer: " << ptr2 << endl;

    return 0;
}