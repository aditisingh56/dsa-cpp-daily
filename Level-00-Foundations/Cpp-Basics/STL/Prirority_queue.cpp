#include<iostream>
using namespace std;
#include<queue> // for priority queue
int main(){
    // priority queue is a special type of queue in which the highest priority element is at the front
    // by default in c++ priority queue is max heap
    priority_queue<int> pq; // max heap
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    cout<<"Elements in the priority queue are: ";
    while(!pq.empty()){
        cout<<pq.top()<<" "; // top function returns the highest priority element
        pq.pop(); // pop function removes the highest priority element
    }
    cout<<endl;

    // for min heap we need to use greater<int> comparator
    priority_queue<int, vector<int>, greater<int>> minHeap; // min heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);
    cout<<"Elements in the min heap priority queue are: ";
    while(!minHeap.empty()){
        cout<<minHeap.top()<<" "; // top function returns the highest priority element
        minHeap.pop(); // pop function removes the highest priority element
    }
    cout<<endl;
    return 0;
}