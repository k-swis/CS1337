//Your Name
//CS 1337
//Lab 31

#include <iostream>
#include <bits.h>

using namespace std;

unsigned int invBit(unsigned int word, int n)
{
	n = 0x01 << n;
	word ^= n;
	
	return word;
}

int main()
{
	char correctedChar;
	int num, offendingBit;
	
	cout << "Your Name - CS 1337 - Lab 31\n\n";
	
	while(cin >> num)
	{
		offendingBit = 0;
		if (getBit(num, 11 - 1) !=
		   (getBit(num, 11 - 3) + getBit(num, 11 - 5) +
		    getBit(num, 11 - 7) + getBit(num, 11 - 9) +
		    getBit(num, 11 - 11)) % 2)
		{
			offendingBit += 1;
		}
	
		if (getBit(num, 11 - 2) !=
		   (getBit(num, 11 - 3) + getBit(num, 11 - 6)  +
		    getBit(num, 11 - 7) + getBit(num, 11 - 10) +
		    getBit(num, 11 - 11)) % 2)
		{
			offendingBit += 2;
		}
	
		if (getBit(num, 11 - 4) !=
		   (getBit(num, 11 - 5) + getBit(num, 11 - 6) +
		    getBit(num, 11 - 7)) % 2)
		{
			offendingBit += 4;
		}
	
		if (getBit(num, 11 - 8) !=
		   (getBit(num, 11 - 9) + getBit(num, 11 - 10) +
		    getBit(num, 11 - 11)) % 2)
		{
			offendingBit += 8;
		}
	
		if (offendingBit > 0)
		{
			num = invBit(num, 11 - offendingBit);
		}
		
		correctedChar = 0;
		correctedChar = setBits(correctedChar, 0, 3, getBits(num, 11 - 11, 3));
		correctedChar = setBits(correctedChar, 3, 3, getBits(num, 11 - 7, 3));
		correctedChar = setBit(correctedChar, 6, getBit(num, 11 - 3));
		
		cout << correctedChar;
	}
	
	return 0;
}