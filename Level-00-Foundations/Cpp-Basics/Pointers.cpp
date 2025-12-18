#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b = 20;
    float pi = 3.14;
    string d = "Hello, World!";
    string *pointer4 = &d;
    float *pointer3 = &pi;
    int *pointer1 = &a;
    int *pointer2 = &b;

    
    // there is something called Dereferncing, it means value of an adress.
cout <<"Derence or the value of a is "<<*(pointer1)<<" and the value of b is "<<*(pointer2)<<endl;


    // there is something called pointer to pointer
    int **pointerToPointer = &pointer1; // This means pointerToPointer stores the adress of pointer1 means saving adress of variable that is svaing another variables address.
    cout<<"The adress of a is: "<<pointer1<<endl;// pointers are special variables that store adress of other variables
    cout<<"The adress of b is: "<<pointer2<<endl;
    cout<<"The value at adress pointer1 is: "<<*pointer1<<endl; // dereferencing pointer to get the value at that adress
    cout<<"The value at adress pointer3 is: "<<*pointer3<<endl;
    return 0;
    
}