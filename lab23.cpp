//Your Name
//CS 1337
//Lab 23

#include <climits>

using namespace std;

// Returns the number of bits that are on (i.e., equal to 1) in word
unsigned int bitsOn(int word)
{
	unsigned int allOnes, allZeros, currentBitOn, leftmostBitOff, leftmostBitOn, totalBit;
	allZeros = 0x00; 					// like 00000000
	allOnes = ~allZeros; 				// like 11111111
	leftmostBitOff = allOnes >> 1;		// like 01111111
	leftmostBitOn = ~leftmostBitOff;	// like 10000000
	currentBitOn = leftmostBitOn;
	
	totalBit = 0;
	
	while(currentBitOn != 0x00)
	{
		if((word & currentBitOn) == currentBitOn)
		{
			//Found a 1 bit
			totalBit += 1;
			
		}
		
		currentBitOn >>= 1;				//like currentBitOn >> 1
		
	}
	 return totalBit;
}

//ugh