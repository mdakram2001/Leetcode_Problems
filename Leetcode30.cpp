// Leetcode Quest 6
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> newNums(nums.size());
        vector<int> result(0);

        for(int i=0; i<nums.size(); i++){
            newNums[nums[i]-1] = nums[i];
        }

        for(int j=0; j<newNums.size(); j++){
            if(newNums[j] == 0){
                result.push_back(j+1);
            }
        }
        return result;
    }
};
