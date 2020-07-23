//Your Name
//CS 1337
//Lab 29

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>
#include <bits.h>

using namespace std;

void decompress(unsigned int info, unsigned int& age, unsigned int& grade, char& sex, double& GPA)
{
	age = getBits(info, 12, 4) + 3;
	
	grade = getBits(info, 8, 4);
		
	sex = getBit(info, 7) == 0x01 ? 'M' : 'F';			

	GPA = getBits(info, 4, 3) + (getBits(info, 0, 4) / 10.0);
					
}					
