// Leetcode Problem 15

class Solution {
public:
    int hammingDistance(int x, int y) {
        string s1 = bitset<32>(x).to_string();
        string s2 = bitset<32>(y).to_string();
        int index = 0;

        
        for(int i=0;i<s2.length();i++){
            if(s1[i]!=s2[i]){
                index += 1;
            }
        }
        
        return index;
    }
};
