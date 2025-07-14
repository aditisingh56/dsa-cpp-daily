#include <bits/stdc++.h>
using namespace std;

struct Entry{string item; double amt; string date;};
int main(){
    vector<Entry> log;
    int ch;
    do{
        cout<<"\n1‑Add 2‑Report 3‑Total 4‑Exit: "; cin>>ch;
        if(ch==1){
            Entry e;
            cout<<"Item: "; cin>>ws; getline(cin,e.item);
            cout<<"Amount: "; cin>>e.amt;
            cout<<"Date (YYYY‑MM‑DD): "; cin>>e.date;
            log.push_back(e);
        }else if(ch==2){
            for(auto &e:log)
                cout<<e.date<<" | "<<left<<setw(20)<<e.item<<" | "<<e.amt<<"\n";
        }else if(ch==3){
            double total=0;
            for(auto &e:log) total+=e.amt;
            cout<<"Total spent: "<<total<<"\n";
        }
    }while(ch!=4);
}
