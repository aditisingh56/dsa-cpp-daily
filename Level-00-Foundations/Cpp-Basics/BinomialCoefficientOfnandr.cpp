#include<iostream>
using namespace std;
int Factorail( int n){
    int fact =1;
    for(int i =1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int BinomialCoefficient(int n , int r){
    int num = Factorail(n);
    int den = Factorail(r) * Factorail(n - r);
    return num / den;
}
int main(){
    int n , r;
    cout<<"Enter n and r to find nCr: ";
    cin>>n>>r;
    
    cout<<"Binomial Coefficient of "<<n<<" and "<<r<<" is: "<<BinomialCoefficient(n , r);
    return 0;
}