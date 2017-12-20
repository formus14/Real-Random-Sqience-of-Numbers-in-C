#include <iostream>
#include "stdint.h"
#include <time.h>
//#include "sha256.h"
using namespace std;

uint8_t* foo()
{
	uint8_t sendBack[8];
	uint8_t number;
	for(int i =0 ; i< 8 ; i++){
			srand(time(NULL));
			number = rand() % 256; // random number from 0 to 255
			sendBack[i] = number;

	}
	return sendBack;
}

void main (){
	uint8_t* rndNum = foo();
	for(int i =0 ; i< 8 ; i++){
		cout << *rndNum +i<< " ";
	}
	cout << " \n";
	cin.get();
}
