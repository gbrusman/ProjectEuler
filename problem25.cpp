#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void fib_1000(){
string str;
	long long result = 0;
	long long prev = 1;
	long long prev2 = 0;
	 bool found = false;
	 string answer;
	 
	 while(found == false){
		result = prev + prev2;
		prev2 = prev;
		prev = result;
		
	ostringstream convert;
	convert << result;
	str = convert.str();
	if(str.size() == 1000){
		found = true;
		answer = str;
	}
	}	
	cout<< str << endl;
}

int main(){
fib_1000();

}
//FIXME: Need way to store 1000 digits

