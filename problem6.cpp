#include <iostream>
using namespace std;

int find_sum_of_squares(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (i * i);
	}
	return sum;
}

int find_square_of_sums(int n){
	int square;
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	square = (sum * sum);
	return square;
}



int main(){
int n;

cout << "enter n: " << endl;
cin >> n;

int sum_of_squares = find_sum_of_squares(n);
int square_of_sums = find_square_of_sums(n); 

int difference = square_of_sums - sum_of_squares;

cout<< "The sum of squares is: " << sum_of_squares << endl;
cout << "The square of sums is: " << square_of_sums << endl;

cout << "The difference is: " << difference << endl;

}
