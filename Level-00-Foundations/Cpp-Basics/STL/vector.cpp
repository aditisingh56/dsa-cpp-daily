#include <iostream>
#include <vector>
using namespace std;
 int main(){
    int n ;
    cout<<"Enter thre number of elements in the vector you want: ";
    cin>>n;
     vector<int> vec;
     cout<<"Enter "<<n<<" elements of the vector: ";
     for( int i =0; i<n;i++){
        int element;
        cin>>element;
        vec.push_back(element);
     }
     cout<<"The elements in the vector are: ";
        for( int i =0; i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
         cout<<"Enter an element to push back in the vector: ";
         int ele;
         cin>>ele;
         vec.push_back(ele); 
            cout<<"The elements in the vector after pushing back "<<ele<<" are: ";
          for( int i =0; i<vec.size();i++){
            cout<<vec[i]<<" ";
        }

 }