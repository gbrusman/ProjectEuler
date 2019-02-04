#include <iostream>
using namespace std;

int main(){
	int answer;

	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < 1000; j++){
			for(int k = 0; k < 1000; k++){
				if( ((i * i) + (j * j) == (k * k)) && ((i + j + k) == 1000)){
					answer = i * j * k;				
			}
		}
	}
}

	cout << "The pythagorean triplet product is: " << answer << endl;
}
//answer is 0: i = 0; j = 500; k = 500;
