// Leetcode Problem 17

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0;
        int itr = 0;

        for(int i=0; i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
            }else{
                nums[itr] = nums[i];
                itr++;
            }
        }
        for(int i=0; i<zeros;i++){
            nums[itr] = 0;
            itr++;
        }
    }
};
