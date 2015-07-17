//Amazon interview Question apeared in geeksforgeeks. 
//Given two Integers A & B, Print the number of bits to be flipped in order to convert ‘A’ to ‘B’.

#include <iostream>

int numOfBits(int a, int b){
	int c = a ^ b;
	int count = 0;
	while(c){
		if(c%2) count++;
		c = c / 2;
	}
	return count;
}

int main(){
	std::cout<<numOfBits(15,8)<<std::endl;
}