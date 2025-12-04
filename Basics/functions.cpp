#include<iostream>
using namespace std;
int sum (int a , int b){
    int s = a+b;
    return s;
}
int MinOfTwo(int a , int b){
    if(a>b){
        return  b;
    }
    else{
        return a;
    }

}
int Factorail( int n){
    int fact =1;
    for(int i =1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
// these are functions 
int a, b;
cout<<"Enter two numbers to find their sum and minimum: ";
cin>>a>>b;

cout<<"Sum of two numbers a and b entered are: "<<sum(a,b)<<endl;
cout<<"Minimum of two numbers a and b entered are: "<<MinOfTwo(a,b)<<endl;
cout<<"Factorial of "<<a<<" is: "<<Factorail(a)<<endl;
return 0;
}