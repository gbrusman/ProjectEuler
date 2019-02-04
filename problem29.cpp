#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main(){
	int cur;
	set<int> list;
	for(int i = 2; i <= 100; i++){
		for(int j = 2; j <= 100; j++){
			cur = pow(i, j);
			list.insert(cur);
		}
	}
	int answer = list.size();
	
	cout<< "The number of distinct elements is: " << answer << endl;
}
//Answer I got is 422
