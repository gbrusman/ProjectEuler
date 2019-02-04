#include <iostream>
#include <vector>
using namespace std;

long long fib_sum(int n){
	 vector<long long> fib;
	 int result = 0;
	 int prev = 1;
	 int prev2 = 0;
	 long long sum = 0;
	 
	 while(result < n){
		result = prev + prev2;
		prev2 = prev;
		prev = result;
		fib.push_back(result);
	}	 
	for(size_t i = 0; i < fib.size(); i++){
		if(fib[i] % 2 == 0){
			sum += fib[i];
		}
	}
	return sum;
}



int main(){
int n;
cout << "enter n" << endl;
cin >> n;
long long sum = fib_sum(n);
cout << sum << endl;
}
