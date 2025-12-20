#include<iostream>
#include<deque>
#include<list>
using namespace std;
int main(){
deque<int>d; // deque is very similar to list, but it allows random acces like vectors as internally it is implemented using arrays of fixed size
d.push_back(10);
d.push_back(20);
d.push_front(5);
cout<<"Elements in the deque are: ";
for( auto it = d.begin(); it != d.end(); it++){
    cout<<*it<<" ";

}
cout<<endl;
d.pop_back();
cout<<"Elements in the deque after popping back are: ";
for( auto it = d.begin(); it != d.end(); it++){
    cout<<*it<<" ";

}
 // here we can randomly acces like arrays, not in list this isn't possible.
 cout<<"Random access of 2nd index element in deque is: "<<endl;
 cout<<d[2]<<endl;
return 0;
}