#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b = 20;
    int *pointer1 = &a;
    int *pointer2 = &b;
    cout<<"The adress of a is: "<<pointer1<<endl;// pointers are special variables that store adress of other variables
    cout<<"The adress of b is: "<<pointer2<<endl;
    cout<<"The value at adress pointer1 is: "<< &a <<endl; // dereferencing pointer to get the value at that adress
    return 0;
    
}