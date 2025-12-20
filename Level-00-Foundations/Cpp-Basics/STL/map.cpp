#include<iostream>
#include<map>
using namespace std;
//map has key and value. you can visualse map as dictionary in python.
// keys are unique in map
int main(){
    map<int, string> mp; // creating a map with int as key and string as value
    mp[1] = "Aditi"; // this is like map_name[key] = value
    mp[2] = "is";
    mp[3] = "great";
    cout<<"Elements in the map are: "<<endl;
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    // we can also use insert function to insert elements in the map
    mp.insert({4, "programmer"}); 
    cout<<"Elements in the map after inserting an element are: "<<endl;
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }// you can also count the number of elements with a particular key using count function
    cout<<"Count of key 2 in the map is: "<<mp.count(2)<<endl; 
    cout<<"Count of key 4 in the map is: "<<mp.count(4)<<endl;// this will return 1 if key is present else 0
    return 0;
}