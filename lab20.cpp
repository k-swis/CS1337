//Your Name
//CS 1337
//Lab 20

// Function isNegative returns true if num is negative and false otherwise
bool isNegative(int num)
{
	unsigned int allOnes, allZeros, leftmostBitOff, leftmostBitOn;
	allZeros = 0x00; 					// like 00000000
	allOnes = ~allZeros; 				// like 11111111
	leftmostBitOff = allOnes >> 1;		// like 01111111
	leftmostBitOn = ~leftmostBitOff;	// like 10000000
	
	if((num & leftmostBitOn) == leftmostBitOn)
	{
		return true;
	}
	
	return false;
}


