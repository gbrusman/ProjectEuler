//LATTICEPATHS
//problem is asking how many routes to go from top left corner of grid to bottom right corner of grid
//grid is 20x20 in this case

//restated, this problem is asking how many strings of length 40 there are with exactly 20 R's and 20 D's
//answer is 40 choose 20

//For general case:

#include <iostream>
#include <cmath>
using namespace std;

long long fact(int n){
	long long answer = n;
	for(long long i = n-1; i >= 1; i--){
		answer *= i;
	}	
	return answer;
	}



long long comb(int n, int r){
	//nCr = n!/((r!)(n-r!))

	long long answer = (fact(n)) / (fact(r) * fact(n-r));
	return answer;

	}



int main(){
int xSize = 20;
int ySize = 20;

int totalNumberOfSteps = xSize + ySize;

long long answer = comb(totalNumberOfSteps, xSize);
cout << "The answer is " << answer << endl;

}
