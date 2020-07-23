//Your Name
//CS 1337
//Lab 22

using namespace std;

// sizeOfShort determines the number of bits in the internal
// representation of a short
unsigned int sizeOfShort(void)
{
	unsigned short allOnes, allZeros, currentBitOn, leftmostBitOff, leftmostBitOn; 
	unsigned int numShorty;
	allZeros = 0x00; 					// like 00000000
	allOnes = ~allZeros; 				// like 11111111
	leftmostBitOff = allOnes >> 1;		// like 01111111
	leftmostBitOn = ~leftmostBitOff;	// like 10000000
	currentBitOn = leftmostBitOn;
	
	numShorty = 0;
	
	while(currentBitOn != 0x00)
	{
		currentBitOn >>= 1;				//like currentBitOn >> 1
		numShorty += 1;
	}
	
	 return numShorty;
}

// sizeOfInt determines the number of bits in the internal
// representation of an int
unsigned int sizeOfInt(void)
{
	unsigned int allOnes, allZeros, currentBitOn, leftmostBitOff, leftmostBitOn, followAlong; 
	allZeros = 0x00; 					// like 00000000
	allOnes = ~allZeros; 				// like 11111111
	leftmostBitOff = allOnes >> 1;		// like 01111111
	leftmostBitOn = ~leftmostBitOff;	// like 10000000
	currentBitOn = leftmostBitOn;
	
	followAlong = 0;
	
	while(currentBitOn != 0x00)
	{
		currentBitOn >>= 1;				//like currentBitOn >> 1
		followAlong += 1;
	}
	
	 return followAlong;
}

// sizeOfLong determines the number of bits in the internal
// representation of a long
unsigned int sizeOfLong(void)
{
	unsigned long allOnes, allZeros, currentBitOn, leftmostBitOff, leftmostBitOn;
	unsigned int numLongBoi;
	allZeros = 0x00; 					// like 00000000
	allOnes = ~allZeros; 				// like 11111111
	leftmostBitOff = allOnes >> 1;		// like 01111111
	leftmostBitOn = ~leftmostBitOff;	// like 10000000
	currentBitOn = leftmostBitOn;
	
	numLongBoi = 0;
	
	while(currentBitOn != 0x00)
	{
		currentBitOn >>= 1;				//like currentBitOn >> 1
		numLongBoi += 1;
	}
	
	 return numLongBoi;
}

// sizeOfLongLong determines the number of bits in the internal
// representation of a long long
unsigned int sizeOfLongLong(void)
{
	unsigned long long allOnes, allZeros, currentBitOn, leftmostBitOff, leftmostBitOn;
	unsigned  int numRealLongBoi; 
	allZeros = 0x00; 					// like 00000000
	allOnes = ~allZeros; 				// like 11111111
	leftmostBitOff = allOnes >> 1;		// like 01111111
	leftmostBitOn = ~leftmostBitOff;	// like 10000000
	currentBitOn = leftmostBitOn;
	
	numRealLongBoi = 0;
	
	while(currentBitOn != 0x00)
	{
		currentBitOn >>= 1;				//like currentBitOn >> 1
		numRealLongBoi += 1;
	}
	
	 return numRealLongBoi;
}
