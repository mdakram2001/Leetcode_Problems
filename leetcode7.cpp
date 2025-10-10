#include<iostream>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
	
	if(word.length() == 1){
		return true;
	}
    if(int(word[0])>=97 && int(word[0])<=122 && int(word[1])>=65 && int(word[1])<=90){
        return false;
    }
	
    bool cap = false;
    bool sml = false;
    for(int i=1; i<word.length(); i++){
        if(int(word[i])>=65 && int(word[i])<=90){
            cap = true;
        }else if(int(word[i])>=97 && int(word[i])<=122){
            sml = true;
        }else{
            return false;
    	}
    }
    
    
    if(cap && sml){
        return false;
    }else if(!cap && !sml){
        return false;
    }else{
        return true;
    }
}
};




int main(){
	
	cout<<detectCapitalUse("mL");
	
	return 0;
}
