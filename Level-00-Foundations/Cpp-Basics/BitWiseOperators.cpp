#include<iostream>
using namespace std;
int main(){
    int a = 5; // binary representation: 0101
    int b = 3; // binary representation: 0011

    cout << "a & b = " << (a & b) << endl; // AND operator: 0101 & 0011 = 0001 (1 in decimal) agar dono 1 toh 1
    cout << "a | b = " << (a | b) << endl; // OR operator: 0101 | 0011 = 0111 (7 in decimal) agar ek 1 toh 1
    cout << "a ^ b = " << (a ^ b) << endl; // XOR operator: 0101 ^ 0011 = 0110 (6 in decimal) same matlab 0 if different ,matlab 1
    cout << "~a = " << (~a) << endl;       // NOT operator: ~0101 = 1010 (in two's complement, this is -6)
    cout << "a << 1 = " << (a << 1) << endl; // Left shift: 0101 << 1 = 1010 (10 in decimal) we can add zeros in the place left in the right
    cout << "b >> 1 = " << (b >> 1) << endl; // Right shift: 0011 >> 1 = 0001 (1 in decimal)

    return 0;
}