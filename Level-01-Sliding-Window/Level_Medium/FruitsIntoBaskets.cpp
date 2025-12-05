// You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.

// You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

// You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
// Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
// Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
// Given the integer array fruits, return the maximum number of fruits you can pick.//

// LeetCode Question number-904

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int>fruitCount;
        int maxFruits = 0;
        int i =0;
        for(int j = 0; j < fruits.size(); j++){
            fruitCount[fruits[j]]++;
            
            while(fruitCount.size() > 2){
                fruitCount[fruits[i]]--;
                if(fruitCount[fruits[i]] == 0){
                    fruitCount.erase(fruits[i]);
                }
                i++;
            }
            maxFruits = max(maxFruits, j - i + 1);
        }
        
    }
};
int main() {
    Solution solution;
    vector<int> fruits = {1, 2, 1, 2, 3, 2, 1};
    int result = solution.totalFruit(fruits);
    cout << "Maximum number of fruits in two baskets: " << result << endl;
    return 0;
}