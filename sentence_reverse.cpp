/* reverse a string(sentence) keeping words in order. for e.g: "hello world" becomes "world hello"*/
#include <iostream>
#include <vector>
#include <sstream>


using namespace std;
string reverse_word(string sen){
	int len;
	len = sen.length();
	char* begin = &(sen[0]);
	char* end = &(sen[len-1]);
	while(begin < end){
		char temp = *(begin);
		(*begin) = (*end);
		(*end) = temp;
		begin++;
		end--;
	}
	return sen;
}

int main(){
	string sen;
	getline(cin,sen);
	sen = reverse_word(sen);
	string buff;
	stringstream ss(sen);
	vector <string> tokens;
	while(ss >> buff){
		tokens.push_back(buff);
	}
	for(int k=0; k<tokens.size(); ++k ){
		(tokens[k]) = reverse_word(tokens[k]);
	}
	string res = "";
	for(int i=0; i<tokens.size(); ++i ){
		res += tokens[i]+" ";
	}
	cout<<res<<endl;
}