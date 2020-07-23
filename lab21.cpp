//Your Name
//CS 1337
//Lab 21

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// printBinary writes the binary representation of the integer n to
// output stream os
void printBinary(int n, ostream& os)
{
	unsigned int allOnes, allZeros, currentBitOn, leftmostBitOff, leftmostBitOn;
	allZeros = 0x00; 					// like 00000000
	allOnes = ~allZeros; 				// like 11111111
	leftmostBitOff = allOnes >> 1;		// like 01111111
	leftmostBitOn = ~leftmostBitOff;	// like 10000000
	currentBitOn = leftmostBitOn;
	
	while(currentBitOn != 0x00)
	{
		if((n & currentBitOn) == 0x00)
		{
			os << "0";
		}	
		else
		{
			os << "1";
		}
		
		currentBitOn >>= 1;				//like currentBitOn >> 1
		
	}
}


