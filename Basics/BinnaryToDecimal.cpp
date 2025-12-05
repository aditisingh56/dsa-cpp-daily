#include<iostream>
using namespace std;
int BinnaryToDecimal(int binnaryNumber){
    int ans = 0;
    int power= 1;
    while(binnaryNumber>0){
        int remainder = binnaryNumber%10;
        int qutiont = binnaryNumber/10;
        ans =  ans+(remainder*power);
        power*=2; // here we are multiplying by 2 because in binnary system each place represents power of 2 like 1,2,4,8,16 etc.
        binnaryNumber = qutiont; // this is my point to remebvr i'm again and again forgetting this point
    }
    return ans;
}
int main(){
    int binnaryNumber;
    cout<<"Enter a Binnary number: ";
    cin>>binnaryNumber;
    cout<<" The conversion for the entered value is "<< BinnaryToDecimal(binnaryNumber)<<endl;
    return 0;
}