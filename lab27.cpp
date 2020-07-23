//Your Name
//CS 1337
//Lab 27

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>

unsigned int invBit(unsigned int word, int n)
{
	n = 0x01 << n;
	
	word ^= n;
	
	return word;
}