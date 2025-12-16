#include<iostream>
using namespace std;
void PassByValue(int a){ // change to the cop[y of adress]
    cout<<"The value of a before: "<<a<<endl;
    a = a+10;
    cout<<"The value of a after: "<<a<<endl;

}
void PassByReference(int &b){ // change to the same adfress 
    cout<<"The value of b before: "<<b<<endl;
    b = b+10;
    cout<<"The value of b after: "<<b<<endl;
// when we do pass by value what we are doing is we are passing the cop[y of the value not the actil va;lue so the change happens in the cop[y of the va;ue not at the actual value and when we come out of the funvtion the roginal remain the same because the copy was changed not the original. 
// but when we do pass by reference what we are doing is we are passing the actual value so the change happens in the actual value and when we come out of the function the original value is changed because the actual value was changed.]]
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