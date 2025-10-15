// Leetcode Problem 12

class Solution {
public:
    int lengthOfLastWord(string s) {
    int count=0;
    int i = s.length()-1;
    for(i; i >= 0; i--){
        if(s[i] ==' '){
            continue;
        }else{
            break;
        }
    }
    for(i; i >= 0; i--){
        if(s[i] ==' '){
            break;
        }else{
            count++;
        }
        }
        return count;
}
};
