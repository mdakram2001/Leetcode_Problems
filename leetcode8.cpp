// Leetcode Problem 08

class Solution {
public:
    string toLowerCase(string s) {
        char cap[] =
        {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

        char sml[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

        for (int i=0;i<s.length();i++){
            for (int j=0;j<26;j++){
                if(s[i]==sml[j]){
                    continue;
                }else if(s[i]==cap[j]){
                    s[i]=sml[j];
                }else{
                    continue;
                }
            }
        }
        return s;
}
};
