// Leetcode Quest 2
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr(2 * n);

        for (int i = 0; i < n; i++) {
            arr[2*i]     = nums[i];
            arr[2*i + 1] = nums[n + i];
        }

        return arr;
    }
};





// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> arr(2 * n);
//         int itr=0;
//         for(int i=0; i<2*n; i=i+2){
//             arr[i] = nums[itr];
//             arr[i+1] = nums[n+itr];
//             itr++;
//         }

//         return arr;
//     }
// };


