#include<iostream>
using namespace std;
#include<list> // a list is doubly linked which means each node has adress of previous and next node
int main(){
    // Are sequential containers are:
    //  vectors
    //  deque
    //  list..... and more  

    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    cout<<"Elements in the list are: ";
    for( auto it = lst.begin(); it != lst.end(); it++){ // auto is used to automatically deduce the type of the iterator
        cout<<*it<<" "; // begin points to the adress of the first value not the value which is why we are derefencing it 
    }
    cout<<endl;
    lst.pop_back();
    cout<<"Elements in the list after popping back are: ";
     for( auto it = lst.begin(); it != lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    lst.push_front(5);
    cout<<"Elements in the list after pushing front are: ";
     for( auto it = lst.begin(); it != lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}