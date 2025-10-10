#include<iostream>
#include<string>
using namespace std;

int strStr(string haystack, string needle) {
	int index = -1;
	int itr = 0;

    if(haystack.length()<needle.length()){
        return index;
    }

    for(int i=0; i<haystack.length(); i++){
    	if(haystack[i]==needle[0]){
    		itr = i;
    		index = i;
    		for(int j=0; j<needle.length(); j++){
    			if(haystack[itr] != needle[j]){
    				index = -1;
                    break;
				}
                if(haystack.length()-i<needle.length()){
                    index = -1;
                    return index;
                }
				itr++;
			}
			if(index!=-1){
				break;
			}
		}
	}
	return index;
}





int main(){
	
	cout<<strStr("mississippi", "issipi");
	
	return 0;
}
