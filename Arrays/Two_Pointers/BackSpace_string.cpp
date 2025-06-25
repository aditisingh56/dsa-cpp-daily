// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.//

//LeetCode Question Number: 844(Backspace string compare)
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size()-1;
         int j = t.size()-1;
         int skipS = 0 , skipT = 0;

         while( i>=0 || j>=0){
             while(i>=0){
                if(s[i] == '#'){
                    skipS++;
                    i--;
                }
                else if(skipS>0){
                    skipS--;
                    i--;
                }
                else{
                    break;
                }

             
            }

            while(j>=0){
                if(t[j] == '#'){
                    skipT++;
                    j--;
                }
                else if(skipT>0){
                    skipT--;
                    j--;
                }
                else{
                    break;
                }

                
             }
              if( i>=0 && j>=0 ){
                if( s[i]!=t[j])
                    return false;
              }
              else{
                  if(i>=0 || j>=0 )
                return false;
              }
              i--;
              j--;
         }
      return true;        
    }
    
};
int main(){
    Solution sol;
    string s = "ab#c";
    string t = "ad#c";

     if (sol.backspaceCompare(s, t)) {
        cout << "The strings are equal after processing backspaces." << endl;
    } else {
        cout << "The strings are NOT equal after processing backspaces." << endl;
    }

    return 0;


}