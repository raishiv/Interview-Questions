//shuffle an array of n integers so that it produce a total random array

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> shuffle(vector<int> nums){
	int random ;
	int len = nums.size() - 1;
	int t;
	for(int j= 0 ; j <= len  ; j++){
		random = rand() % len + 0;
		t = nums[j];
		nums[j] = nums[random];
		nums[random] = t;
	}
	return nums;
}

int main(){
	int n;//enter the number of elements in array
	cin>>n;
	vector<int> nums;
	int temp;
	while(n--){
		cin>>temp;
		nums.push_back(temp);
	}
	string s;
	
	while(s != "exit"){
	cin>>s;
	vector<int> res = shuffle(nums);
	for(int i=0; i < res.size(); i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
}

	return 0;
}