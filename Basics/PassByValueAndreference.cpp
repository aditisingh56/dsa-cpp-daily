#include<iostream>
using namespace std;
void PassByValue(int a){
    cout<<"The value of a before: "<<a<<endl;
    a = a+10;
    cout<<"The value of a after: "<<a<<endl;

}
void PassByReference(int &b){
    cout<<"The value of b before: "<<b<<endl;
    b = b+10;
    cout<<"The value of b after: "<<b<<endl;

} int main(){
    int x = 5;
    int y = 5;
    cout<<"Demonstrating Pass By Value:"<<endl;
    PassByValue(x);
    cout<<"Value of x in main after Pass By Value: "<<x<<endl;

    cout<<"\nDemonstrating Pass By Reference:"<<endl;
    PassByReference(y);
    cout<<"Value of y in main after Pass By Reference: "<<y<<endl;

    return 0;
}