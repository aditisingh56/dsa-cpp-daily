#include<string>
using namespace std;
 // 1456. Maximum Number of Vowels in a Substring of Given Length.

 // i will be listing the things you can get stuck, as i got stuck at these points.

class Solution {
public:
    int maxVowels(string s, int k) {
    int i =0 , j =0, n = s.length(), count =0 , ans =0;

    auto isVowel = [](char c){
        return c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u';
    };
    // i did not undersatnd this lambda function at first, i thought why not just make a set of vowels and check if the character is present in the set or not, i also though to make a map. 
    // but that is not the correct way to approach this.
    // this is lamda function , it is a small un named function which we can use to perform small tasks. here we are using it to check if a character is vowel or not.
    // syntax of lambda function is
    // [capture](parameters) { body };
    // here we are capturing nothing, as we don't need to capture any variable from outside the
    while(j <n){
        if( isVowel(s[j])){
            count++;
        }
        if(j-i+1<k){
            j++;
        }
        else{
            ans = max(ans, count);
            if(isVowel(s[i])){
                count --;
            }
            i++;
            j++;
        }
   
    }
      return ans;

    }
    // this is a simple logic, we atre checking if the cariable is vowel or not, if it is vowel then we just increse its count .
    //if the window has reached its size then we, check if the the last i is contributing to xount if yes. we remove it. 
    //here, ptr is ypu can use alternbatives of ther lamda function like string
    // string alternativ ewas , string vowel = "aeiou";
    // and then check if vowel.find(s[j]) != string::npos here npos means that the character is not found in the string, just like in vectors we have end()
};