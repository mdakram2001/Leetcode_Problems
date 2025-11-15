// Leetcode Quest 7
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> str(0);
        int itr = 1;
        int newTarget = target.size();
        for(int i=0; i<newTarget; i++){
            if(target[i] == itr){
                str.push_back("Push");
                itr++;
            }else{
                str.push_back("Push");
                str.push_back("Pop");
                itr++;
                i--;
            }
        }
        return str;
    }
};
