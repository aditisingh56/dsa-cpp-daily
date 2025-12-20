#include<iostream>
#include<vector>
#include<utility> // for pair. this is point to rmemeber that pair is in utility header file
using namespace std;
int main(){
    vector<pair <int, string>> vec = { {1, "Aditi"}, {2, "is"}};
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    /// we can creayte a pair like this also
    pair<int, string> p;
    p.first = 3;
    p.second = "great";
    cout<<"The pair created separately is: "<<p.first<<" "<<p.second<<endl;
    return 0;
}