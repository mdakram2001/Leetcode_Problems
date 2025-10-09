#include<iostream>
#include<vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int prev=nums[0];
    int count = 0;

    for(int i=0; i<n; i++){
        if(nums[i]==nums[count]){
            continue;
        }else{
            count++;
            nums[count] = nums[i];
        }
    }
    count=count+1;
    return count;
};


int main(){
	
	vector<int> num = {0,0,1,1,1,2,2,3,3,4,5,5,5,5};
	
	cout<<"Total Elements : "<<removeDuplicates(num)<<endl;
	
	for(int i:num){
		cout<<i<<endl;
	}
	
	return 0;
}

