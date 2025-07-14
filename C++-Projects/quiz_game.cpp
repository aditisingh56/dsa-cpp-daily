#include <bits/stdc++.h>
using namespace std;

struct Q{string q; array<string,4> opt; int ans;};
int main(){
    vector<Q> qs{
        {"Capital of France?",{"Berlin","London","Paris","Rome"},2},
        {"2+2*2 = ?",{"4","6","8","2"},1},
        {"Who wrote '1984'?",{"Orwell","Huxley","Tolkien","Rowling"},0}
    };
    int score=0;
    for(size_t i=0;i<qs.size();++i){
        cout<<"\nQ"<<i+1<<": "<<qs[i].q<<"\n";
        for(int j=0;j<4;++j) cout<<"  "<<j+1<<") "<<qs[i].opt[j]<<"\n";
        int choice; cout<<"Your answer: "; cin>>choice; --choice;
        if(choice==qs[i].ans){ cout<<"✅ Correct\n"; ++score;}
        else cout<<"❌ Wrong. Correct = "<<qs[i].opt[qs[i].ans]<<"\n";
    }
    cout<<"\nFinal Score: "<<score<<"/"<<qs.size()<<"\n";
}
