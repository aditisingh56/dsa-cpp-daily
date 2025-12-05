#include<iostream>
using namespace std;
int main(){
    // conditional statements 
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age ==18){
        cout<<"you are eligible"<<endl;
    }
    else if(age >= 50){
        cout<<"You are senior citizen"<<endl;
    }
    else{
        cout<<"You are not eligible"<<endl;
    }
    return 0;

}