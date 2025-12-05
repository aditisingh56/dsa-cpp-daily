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
    cout<<"Demonstrating Pass By Value:"<<endl; // output aayega 5 than 15 than 5, this shows that in pass by value , we create a cop[y of the orginal value and the cahnges happens in the copy value not in the original value, and than when we print the original value that is not changed.
    PassByValue(x);
    cout<<"Value of x in main after Pass By Value: "<<x<<endl;

    cout<<"\nDemonstrating Pass By Reference:"<<endl; // output aayega 5 than 15 than 15, this shows that in pass by reference , we don't create a copy of the original value and the changes happens in the original value, and than when we print the original value that is changed.this means we are passing the reference(memory adress) of that variable so changes happens only in that varibale.
    PassByReference(y);
    cout<<"Value of y in main after Pass By Reference: "<<y<<endl;

    return 0;
}