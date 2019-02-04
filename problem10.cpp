#include <iostream>
using namespace std;

bool is_prime(long long num){
	 if(num < 2) return false;
    if(num == 2) return true;
    if(num % 2 == 0) return false;
    for(int i=3; (i*i)<=num; i+=2){
        if(num % i == 0 ) return false;
    }
    return true;
}



int main(){
	int sum = 0;
	for(int i = 2; i <= 2000000; i++){
		if(is_prime(i)){
			sum += i;
		}
	}
	
	cout << "The sum of all primes below 2,000,000 is: " << sum << endl;
}
//answer I got is: 1,179,908,154

