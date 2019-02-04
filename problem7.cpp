#include <iostream>
using namespace std;


bool is_prime(long long num){
	/*bool is_prime = true;
	long long lim = ceil(sqrt(num));
	for(long long i = 2; i <= lim; i++){
		if(num % i == 0){
			is_prime = false;
		}
	}
	return is_prime;
	*/
	bool is_prime = true;
	if(num == 2){
		is_prime = true;
	}
	if(num == 3){
		is_prime = true;
	}
	if(num % 2 == 0){
		is_prime = false;
	}
	if(num % 3 == 0){
		is_prime = false;
	}
	
	long long i = 5;
	long long w = 2;
	
	while(i * i <= num){
		if(num % i == 0){
			is_prime = false;		
		}
		i += w;
		w = 6 - w;
}
return is_prime;
}
int main(){
	int n;
	cout << "enter n + 1: " << endl;
	cin >> n;
	int count = 0;
	int i = 1;
	int answer;
	
	while(count != n){
		if(is_prime(i)){
			count++;
		}
		if(count == n){
			answer = i;
		}
		i++;		
	}
	
	cout << "The " << n << "th prime is: " << answer << endl;
	
}	
	
	
