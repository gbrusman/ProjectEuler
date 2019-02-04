#include <iostream>
#include <cmath>
using namespace std;


int findNumFactors(int curTriNum){
	int numFactors = 1; // because 1 is always a factor
	for(int i = 2; i <= sqrt(curTriNum); i++){
		if( curTriNum % i == 0){
			numFactors += 1;
			
			if(curTriNum / i != i){
				numFactors += 1;			
			}
		}
	}
	return numFactors;

}


int main(){

	int numFactors;

	bool done = false;

	int i = 1;
	int curTriNum = 1; // initialize

	while(!done){
		numFactors = findNumFactors(curTriNum);
		if(numFactors > 500){
			done = true;
			break;
		}
		i++;
		curTriNum += i;
	
	}

	cout << curTriNum << endl;
}
