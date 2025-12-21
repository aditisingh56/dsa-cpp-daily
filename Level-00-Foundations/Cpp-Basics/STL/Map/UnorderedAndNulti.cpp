#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;
int main(){
    // unordered map is similar to map but it doesn't store elements in sorted order
    unordered_map<int, string> ump; // creating an unordered map with int as key and string as value
    ump[1] = "Aditi";
    ump[2] = "is";
    ump[3] = "great";
    cout<<"Elements in the unordered map are: "<<endl;
    for(auto it = ump.begin(); it != ump.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    // multi map allows multiple values for same key
    multimap<int, string> mmp;
    mmp.insert({1, "Aditi"});
    mmp.insert({2, "is"});
    mmp.insert({2, "also"});
    mmp.insert({3, "great"});
    cout<<"Elements in the multi map are: "<<endl;
    for(auto it = mmp.begin(); it != mmp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}