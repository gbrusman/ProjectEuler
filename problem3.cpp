#include <iostream>
#include <cmath>
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
	long long n;
	int max_prime = 0;
	long long curmod;
	
	//get input
	cout << "Enter n: " << endl;
	cin >> n;
	
	//int lim = ceil(sqrt(n));
	/*
	for(long long i = n; i <= n; i++){
		if((n % i == 0) && (is_prime(i) == true) && (i > max_prime)){
			max_prime = i;
		} 
	}*/
	
	curmod = n / 2;
	if(is_prime(curmod)){
		max_prime = curmod;
	}
	else{
		do{
		curmod--;
		if(is_prime(curmod) && (n % curmod == 0)){
			max_prime = curmod;
			break;
		}
		}while(curmod > 2);
		
	}
	
	cout << "The max prime is: " << max_prime << endl;

}
