#include<iostream>
using namespace std;
int DecimalToBinnary(int decimalNumber){
    int ans = 0;
    int power= 1;
    while(decimalNumber>0){
        int remainder = decimalNumber%2;
        int qutiont = decimalNumber/2;
        ans =  ans+(remainder*power);
        power*=10; // i was facing difficulty to undersatnd that, why do we have power. let me exaplin exactly why
        //so, what happend is when we get remainder than we divide by 2 and get ans  and keep repating the ans we store comes in reverse order of what we want . for example for 10 the correct order is 1010 but we get 0101. so, we have to multiply each digit with the place we want it to be like we want 1 in thousands place so multiply 1 withh 1000.
        decimalNumber = qutiont; // like if we have 42 and humne ek baar use 2 se divide kar liya. next time what will be our decimal value this 21 right. so, we are telling ki for next iteration the quotient is 2 se divide karne ke baad jo ans aaya hai.
    }
    return ans;
}
int main(){
    int decimalNumber;
    cout<<"Enter an decimal number to convert it into binnary form: "<<endl;
    cin>>decimalNumber;
    cout<<" The conversion for the entered value is"<< DecimalToBinnary(decimalNumber)<<endl;
    return 0;
}