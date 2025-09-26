// Leetcode Plus One Problem

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count = digits.size();
        vector<int> newdig(count+1, 0);

        if(digits[count-1] == 9){
            for(int i=count-1;i>=0;i--){
                if(digits[i] == 9){
                    digits[i] = 0;
                    if(i==0){
                        newdig[0] += 1;
                        return newdig;
                    }
                }else{
                    digits[i]+=1;
                    break;
                }
                
            }
        }else{
            digits[count-1] += 1;
        }
        
        return digits;
    }
};
