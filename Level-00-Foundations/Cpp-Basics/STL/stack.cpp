#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        // we can also swap two stacks
        cout<<endl;
        cout<<"Beforre swapping the size is "<<endl;
        cout<<s.size()<<endl;
        stack<int> s2;
        swap(s, s2);
        cout<<"After swapping the size is "<<endl;
        cout<<s.size()<<endl;
        cout<<"The size of second stack after swapping is "<<s2.size()<<endl;
}