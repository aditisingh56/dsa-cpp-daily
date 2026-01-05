

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

  
    // 1️ Simple lambda (no capture)
   

    // Normal function equivalent:
    // bool isVowel(char c) { ... }

    auto isVowel = [](char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    };

    char ch = 'e';
    if (isVowel(ch)) {
        cout << ch << " is a vowel" << endl;
    } else {
        cout << ch << " is not a vowel" << endl;
    }



  // 2️ Lambda with parameters
   

    auto add = [](int a, int b) {
        return a + b;
    };

    cout << "Addition: " << add(3, 5) << endl;

   
    // 3 Lambda used with STL
    

    vector<int> nums = {5, 2, 9, 1, 3};

    // Sort in descending order using lambda
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });

    cout << "Sorted in descending order: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    
 

    int limit = 10;

    // This lambda CAPTURES 'limit'
    auto isGreaterThanLimit = [limit](int x) {
        return x > limit;
    };

    cout << "Is 15 greater than limit? "
         << isGreaterThanLimit(15) << endl;


    // 5️ Key takeaway


    /*
        Lambda syntax:
        [capture](parameters) { body };

        []      -> capture nothing
        [x]     -> capture x by value
        [&x]    -> capture x by reference
        [=]     -> capture all by value
        [&]     -> capture all by reference
    */

    return 0;
}
