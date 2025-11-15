// Leetcode Quest 4
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> miss(2);
        vector<int> newArr(nums.size());
        int duplicate = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(newArr[nums[i]-1] != 0){
                duplicate = nums[i];
            }else{
                newArr[nums[i]-1] = nums[i];
            }
        }

        for(int j = 0; j<newArr.size(); j++){
            if(newArr[j] == 0){
                miss[1] = j+1;
                miss[0] = duplicate;
            }
        }
        return miss;
    }
};
