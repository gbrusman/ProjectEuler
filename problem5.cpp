#include <iostream>


int main(){

bool solved = false;
int i = 2520;
bool this_number = true;
int answer;
int checklist[] = {11, 13, 14, 16, 17, 18, 19, 20};
do{
	for(int &j : checklist){
		if(i % j != 0){
			this_number = false;
			break;
		}
	}
	if(this_number == true){
		answer = i;
		solved = true;
	}

	i+= 2520;
}while(solved == false);

std::cout <<"The answer is: " << answer << std::endl;


}
