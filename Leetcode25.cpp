// Leetcode Quest 1
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int new_size = 2*nums.size();
        vector<int> arr(new_size);
        for(int i=0; i<nums.size(); i++){
            arr[i] = nums[i];
            arr[nums.size() + i] = nums[i];
        }

        return arr;
    }
};
