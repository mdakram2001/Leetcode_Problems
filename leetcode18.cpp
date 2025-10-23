// Leetcode Problem 18

class Solution {
public:
    bool isValid(string s) {

        string par = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                par = ')'+par;
            }else if(s[i] == '['){
                par = ']'+par;
            }else if(s[i] == '{'){
                par = '}'+par;
            }else{
                if(s[i] == par[0]){
                    par = par.erase(0,1);
                }else{
                    return false;
                }
            }
        }
        return par.length()>0?false:true;
    }
};
