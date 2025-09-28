// Leetcode isPalindrome Solved

class Solution {
public:
bool isPalindrome(int x) {
        long num = x;
        long y = 0;
        long mul=1;
        if(x==0){
            return true;
        }else if(x<0 || x%10 == 0){
            return false;
        }else{
        	while(num%mul != num){
        		mul=mul*10;
			}
        	mul=mul/10;
        	
            while(num!=0){
            y = (num%10)*mul + y;
            num=num/10;
            mul=mul/10;
        	}
        
        if(x==y){
            return true;
        }else{
            return false;
        }
        }
    }
};
