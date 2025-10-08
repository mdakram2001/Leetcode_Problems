#include<iostream>
#include<vector>
using namespace std;


int removeElement(vector<int>& nums, int val){
	
	int n = nums.size();
	int count=0;
	
	for(int i=0; i<n; i++){
		if(nums[i]==val){
			continue;
		}else{
			nums[count]=nums[i];
			count++;
		}
	}
	return count;
	
}

int main(){
	
	vector<int> num = {3,2,2,3};
	
	removeElement(num, 3);
	
	return 0;
}
