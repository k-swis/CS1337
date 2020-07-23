//Your Name
//CS 1337
//Lab 15

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// Function reverseInt returns an integer whose digits are in the
// reverse order of num.  For example, if num is 1234, the returned
// integer would be 4321.
unsigned int reverseInt(unsigned int num)
{
	unsigned int digit, revNum;
	
	revNum = 0;
	
	while(num > 0)
	{
		digit = num % 10; 
		revNum *= 10;
		revNum += digit;
		num /= 10;
	}
	
	return revNum;
}