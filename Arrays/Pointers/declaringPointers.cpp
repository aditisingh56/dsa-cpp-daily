#include <iostream>
using namespace std;
int main(){
int a = 10;

cout<< "Value of a: " << a << endl; 
int* ptr = &a; // Pointer to the variable a
cout << "Value of a using pointer: " << *ptr << endl; 
cout<< "Address of a: " << &a << endl;
cout<<"Address of ptr: " << &ptr << endl;
int * *ptr2 = &ptr; // Pointer to pointer
cout << "Value of a using pointer to pointer: " << **ptr2 << endl;
cout << "Address of a using pointer to pointer: " << *ptr2 << endl;
cout<<*(*ptr2) << endl; // Dereferencing pointer to pointer
}


