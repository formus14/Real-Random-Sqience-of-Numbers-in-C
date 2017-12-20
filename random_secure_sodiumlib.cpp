#include "sodium.h"
#include <iostream>
#include "stdint.h"
using namespace std;
void  main()
{
    char myString[32];
    uint32_t myInt;

    /* myString will be an array of 32 random bytes, not null-terminated */        
    randombytes_buf(myString, 32);
    /* myInt will be a random number between 0 and 9 */
    myInt = randombytes_uniform(10);
	  cout << "Here is a random secure number: "<<myInt << " \n";
    cin.get();
}
