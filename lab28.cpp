//Your Name
//CS 1337
//Lab 28

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>
#include <bits.h>

extern const int N;

using namespace std;

void printHexadecimal(int word, ostream& os)
{
	int i;

	for ( i = (N - 1) / 4 * 4; i >= 0; i -= 4)
	{
		if(getBits(word, i, 4) < 10)
		{
		os << getBits(word, i, 4);
		}
		
		else if(getBits(word, i, 4) > 9 && 
				getBits(word, i, 4) < 11)
		{
		os << 'A';	
		}
		
		else if(getBits(word, i, 4) > 10 && 
				getBits(word, i, 4) < 12)
		{
		os << 'B';	
		}
		
		else if(getBits(word, i, 4) > 11 && 
				getBits(word, i, 4) < 13)
		{
		os << 'C';	
		}
		
		else if(getBits(word, i, 4) > 12 && 
				getBits(word, i, 4) < 14)
		{
		os << 'D';	
		}
		
		else if(getBits(word, i, 4) > 13 && 
				getBits(word, i, 4) < 15)
		{
		os << 'E';	
		}
		
		else if(getBits(word, i, 4) == 15)
		{
		os << 'F';	
		}
	}
	
}