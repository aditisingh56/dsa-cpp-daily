#include <bits/stdc++.h>
using namespace std;

struct Account{
    int id;
    string name;
    double balance;
};

int main(){
    unordered_map<int,Account> db;
    int choice; 
    do{
        cout<<"\n1‑Create 2‑Deposit 3‑Withdraw 4‑Show 5‑Exit : ";
        cin>>choice;
        if(choice==1){
            Account a;
            cout<<"New ID: "; cin>>a.id;
            cout<<"Name : "; cin>>ws; getline(cin,a.name);
            cout<<"Init balance: "; cin>>a.balance;
            db[a.id]=a;
        }else if(choice==2||choice==3){
            int id; double amt;
            cout<<"ID & amount: "; cin>>id>>amt;
            auto it=db.find(id);
            if(it==db.end()) {cout<<"No such account\n"; continue;}
            if(choice==2) it->second.balance+=amt;
            else if(it->second.balance>=amt) it->second.balance-=amt;
            else {cout<<"Insufficient funds\n";}
        }else if(choice==4){
            for(auto &[_,a]:db)
                cout<<a.id<<" | "<<a.name<<" | "<<a.balance<<"\n";
        }
    }while(choice!=5);
}
