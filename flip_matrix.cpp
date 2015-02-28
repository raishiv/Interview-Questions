/*given a NxM matrix where each row consisting of value 'P' or 'T'.
we can flip the column to get P in place of T and vice versa. 
We are being asked to flip as many number of times as we want and
get the maximum number of rows containing same character. either all Ts or all Ps
for eg. we have a matrix TPT
						 PTP
						 PPP
If we flip second column once we will get row 1 and row 2 as TTT and PPP. so answer is 2
*/
#include <iostream>
#include <string>
#include <map>
#include <math.h>
#include <vector>
using namespace std;

int find_num(vector<string> s, int n, int m){
	int set_t[n];
	int set_p[n];
	map <int,int> dict;
	for(int i =0 ; i < n; i++){
		set_t[i] = 0;
		set_p[i] = 0;
		for(int j = 0; j<m; j++){
			if(s[i][j] == 'T'){
				set_t[i] += (pow(10,j) + j); 
				//cout<<"T:"<<j<<endl;
			}
			else{
				set_p[i] += (pow(10,j) +j);
				//cout<<j<<endl;
			}
		}
		dict[set_t[i]] += 1;
		dict[set_p[i]] += 1;
	}
	for(int k=0; k< n; k++){
		//cout<<set_p[k]<<": "<<set_t[k]<<endl;
	}
	int res = 0;
	for(map <int,int>::iterator ii = dict.begin(); ii != dict.end(); ++ii){
		if((*ii).second > res){
			res = (*ii).second;
		}
	}
	return res;
}

int main(){
	using namespace std;
	int n,m;
	cin>>n;
	cin>>m;
	//map <string,int> dict;
	string s;
	vector<string> arr;
	int i = 0;
	int c = n;
	while(c--){
		cin>>s;
		arr.push_back(s);
		i++;
		//dict[s] += 1;
	}
	int result = find_num(arr,n,m);
	cout<<"Answer is:"<<result<<endl;

	
	
	return 0;
}


//for(map <string,int>::iterator i = dict.begin(); i != dict.end(); ++i){
		//cout<<(*i).first <<": "<<(*i).second<<endl;