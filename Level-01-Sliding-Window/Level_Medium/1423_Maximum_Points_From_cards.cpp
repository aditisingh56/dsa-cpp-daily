#include<iostream>
#include<vector>
using namespace std;
// 1423. Maximum Points You Can Obtain from Cards.
// There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.
// In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.
// Your score is the sum of the points of the cards you have taken.


// okay, this question, I had not undestood the questio itself in one go. Took help pf chatgpt to understand the question. Very simple this is.
// So ypu can pick the numbers from stra or end . total number pick sjopuld be equal to k
// so like first 2 numbers dom start and last 1 number from last if k is 3. or first 1 nuber from fromnt last 2 from back
// but we need to see this question as, not the opnes we need to pick. see the ones we need to leave behind. 
// like tottal n numbers are there, remove k from it. so n-k will be lefdt. find the total sum like keep adding and then, find like for example n =7. total sum is 22. so 
// amd k =3. so n-k is 4. so find the subarray of size 4 with minimum sum. then subtract that from total sum. that will be the answer.

class Solution{
    public:
    int maxScore(vector<int>& cardPoints, int k) {
        int totalSum =0;
        for(int points : cardPoints){
            totalSum += points;
        }
        if( k >= cardPoints.size()){
            return totalSum;
        } //  agar like k is more than size of array then we can take all the elements so return total sum.
        int n = cardPoints.size();
        int windowSize = n - k;
        int currentWindowSum =0;
        int i=0, minWindowSum = INT_MAX;
       for (int j =0; j<windowSize; j++){
            currentWindowSum += cardPoints[j];
         if(j-i+1> windowSize){
            currentWindowSum -= cardPoints[i];
            i++;
         }
         if(j-i+1 == windowSize){
            minWindowSum = min(minWindowSum , currentWindowSum);
         }

        }
        return totalSum - minWindowSum;
    }// dhyan se dekh, this is fixed size window problem. we have to find the minimum sum subarray of size n-k.
    // and then subtract that from total 
    // here we are using its template tpp. one for loop, then claculations and then if the widnow is greater than window size then shrink from left, otherwise if it is equal to window size then check for min sum.
};