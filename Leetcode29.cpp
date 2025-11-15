// Leetcode Quest 5
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> smaller(nums.size());
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            count = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            smaller[i] = count;
        }
        return smaller;
    }
};
