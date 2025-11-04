// Leetcode Single Number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int n : nums) {
            result ^= n;  // XOR each number
        }
        return result;
    }
};

