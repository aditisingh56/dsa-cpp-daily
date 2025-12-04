#include<iostream>
using namespace std;
int SumOfDigits(int n ){
    int sum =0;
    while(n>0){
        int last =n%10;
        n/=10;
        sum+=last;
    }
    return sum;
}
int main(){
    int number;
    cout<<"Enter an number to find sum of its digits: ";
    cin>>number;
    cout<<"Sum of digits: "<<SumOfDigits(number);
}