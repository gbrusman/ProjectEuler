#include <iostream>

using namespace std;



int findSeqLength(int cur, int cache[]){
	int now = cur;
	int length = 0;
	while (now !=1){
		if(now < 1000000 && cache[now] != -1){ //if there is a data entry in the cache for this number
			length += cache[now];
			break;
		}
		if(now % 2 == 0){ //if n is even
			now = now / 2;
			length += 1;
		}	
		else{ //if n is odd
			now = 3*now + 1;
			length += 1;
		}
	}
	return length;
}



int main(){
	int maxSeqLength = 0;
	int seqLength;
	int solution;
	int cache[1000001];
	for(int i = 2; i < 1000001; i++){
		cache[i] = -1;	
	}
	cache[1] = 1;
	
	
	
	for( int cur = 2; cur < 1000000; cur++){
		seqLength = findSeqLength(cur, cache);
		cache[cur] = seqLength;
		if(seqLength > maxSeqLength){
			maxSeqLength = seqLength;
			solution = cur;
		} 
	}
	
	cout << solution << endl;
}
