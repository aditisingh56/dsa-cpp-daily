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