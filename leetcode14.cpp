// Leetcode Problem 14


class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long y = (x < 0) ? -(long long)x : (long long)x;
        long long multiplier = 1;
        long long neg = (x < 0) ? 1 : 0;
        long long digits = (x == 0) ? 0 : (long long)log10(y) + 1;

        if(x==0){
            return 0;
        }

        for(int i=1; i<digits; i++){
            multiplier*=10;
        }

        for(int i=0; i<digits; i++){
            rev += (y%10)*multiplier;
            y=y/10;
            multiplier/=10;
        }

        if (rev > INT_MAX || rev < INT_MIN) return 0;

        if(neg){
            return -(rev);
        }else{
            return rev;
        }
    }
};
