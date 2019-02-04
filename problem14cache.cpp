#include <iostream>
using namespace std;


int main(){

const int number = 1000000;
 
int sequenceLength = 0;
int startingNumber = 0;
long sequence;
 
int cache[number + 1];
//Initialise cache
for (int i = 0; i < number + 1; i++) {
    cache[i] = -1;
}
cache[1] = 1;
 
for (int i = 2; i <= number; i++) {
    sequence = i; // current number in sequence
    int k = 0; //length of sequence
    while (sequence != 1 && sequence >= i) {
        k++;
        if ((sequence % 2) == 0) {
            sequence = sequence / 2;
        } else {
            sequence = sequence * 3 + 1;
        }
    }
    //Store result in cache
    cache[i] = k + cache[sequence];
 
    //Check if sequence is the best solution
    if (cache[i] > sequenceLength) {
        sequenceLength = cache[i];
        startingNumber = i;
    }
}

cout << startingNumber << " produces a chain of length " << sequenceLength << endl;
}
