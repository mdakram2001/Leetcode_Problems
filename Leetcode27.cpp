// Leetcode Quest 3
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int current = 0;

        for (int x : nums) {
            if (x == 1) {
                current++;
                maxCount = max(maxCount, current);
            } else {
                current = 0;
            }
        }

        return maxCount;
    }
};


// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = 0;
//         int newCount = 0;
//         for(int i = 0; i<nums.size(); i++){
//             if((nums[i] == 0) && (newCount>count)){
//                 count = newCount;
//                 newCount = 0;
//             }else if(nums[i] == 1){
//                 newCount++;
//             }else{
//                 newCount = 0;
//             }
//         }
//         if(newCount>count){
//             return newCount;
//         }
//         return count;
        
//     }
// };
