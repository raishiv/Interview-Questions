/*Reverse a cstring. e.g "hello" becomes "olleh"*/

#include <iostream>
using namespace std;
char* reverse_word(char* word){
	char* init = word;
	char* last = word;
	for(int i=0 ; word[i]; i++){
		last++;
	}
	last--;
	while(init < last){
		char temp = (*init);
		(*init) =  (*last);
		(*last) = temp;
		init++;
		last--;
	}
	return word;
}

int main(){
	char word[100];
	cin>>word;
	char* res = reverse_word(word);
	cout<<res<<endl; 
	return 0;
}