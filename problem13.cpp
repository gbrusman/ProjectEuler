#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	ifstream myfile;
	myfile.open("numbers.txt");
	string num;
	getline(myfile, num);
	cout << num; //works, gets one number  


}
