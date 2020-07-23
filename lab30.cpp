//Your Name
//CS 1337
//Lab 30

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <bitset>
#include <climits>
#include <bits.h>

extern const int N;

/*
Scan word, starting from bit startingBit, toward more significant
bits, until the first 0 bit is found. Return the index of the found
bit.  If the bit at startingBit is already what's sought, then
startingBit is returned.  If there's no bit found, then UINT_MAX is
returned.
*/
unsigned int scan0(unsigned int word, unsigned int startingBit)
{
	unsigned int currentBit;
	for(currentBit = startingBit; currentBit < static_cast<unsigned int>(N); currentBit += 1)
	{
		if(getBit(word, currentBit) == 0)
		{
			return currentBit;
		}
	}
	return UINT_MAX;
}
