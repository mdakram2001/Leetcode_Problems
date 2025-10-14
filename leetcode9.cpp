// Leetcode Problem 09


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> boolCandies(candies.size());
        int largest = candies[0];
        for(int i=0;i<candies.size();i++){
            if(candies[i]>largest){
                largest = candies[i];
            }
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=largest){
                boolCandies[i]=true;
            }else{
                boolCandies[i]=false;
            }
        }

    return boolCandies;
    }
};
