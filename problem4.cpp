#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
using namespace std;

bool is_palindrome(int num){
	string str;
	ostringstream convert;
	convert << num;
	str = convert.str();
	string orig = str;
	
	for(unsigned int i = 0; i < (str.size())/2; i++){
		char temp = str[i];
		str[i] = str[str.size()-i-1];
		str[str.size()-i-1] = temp;
	}
	if(str == orig){
		return true;
	}
	return false;

}


int main(){
	int product;
	int max_pal = 0;

	for(int i = 100; i <= 999; i++){
		for(int j = 100; j <= 999; j++){
			product = i*j;
			if(is_palindrome(product) && product > max_pal){
				max_pal = product;
			}
		}
	}
cout << "Maximum palindrome is: " << max_pal << endl;

}
