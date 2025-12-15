#include<iostream>
using namespace std;

void BitWiseConverter(int a, int b){

    cout << "\nBITWISE RESULTS: \n";

    cout << "a & b = " << (a & b) << endl; 
    // 1 & 1 = 1 else 0

    cout << "a | b = " << (a | b) << endl; 
    // 1 | anything = 1

    cout << "a ^ b = " << (a ^ b) << endl; 
    // 1 ^ 1 = 0 (same = 0)
    // 1 ^ 0 = 1 (different = 1)

    cout << "~a = " << (~a) << endl;       
    // flips all bits → gives -(a+1)

    cout << "a << 1 = " << (a << 1) << endl; 
    // multiply by 2

    cout << "b >> 1 = " << (b >> 1) << endl; 
    // divide by 2

}

int main(){
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    BitWiseConverter(a, b);

    return 0;
}
