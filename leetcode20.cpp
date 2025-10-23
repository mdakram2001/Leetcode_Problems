// Leetcode Problem 20

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> freq(26, 0); // frequency array for 'a' to 'z'

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int f : freq) {
            if (f != 0)
                return false;
        }

        return true;
    }
};


// My Solution but take O(n) time.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }else{
            for(int i=0;i<s.length();i++){
                int scount = count(s.begin(), s.end(), s[i]);
                int tcount = count(t.begin(), t.end(), s[i]);
                if(scount != tcount){
                    return false;
                }
            }
        }
        return true;
    }
};
