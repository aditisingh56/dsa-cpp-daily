// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// 
// LeetCode Question Number-125
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end){

            while(start<end && !isalnum(s[start])) start++;
            while(start<end && !isalnum(s[end])) end--;

            if( tolower(s[start]) != tolower(s[end]))
              return false;
            start++;
            end--;

        }
        return true;
    }
};
int main() {
    Solution sol;
    string s = "A man, a plan, a canal: Panama";
    cout << "Is it a palindrome? → ";
    if (sol.isPalindrome(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
