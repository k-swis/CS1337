//Your Name
//CS 1337
//Lab 25

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <bitset>
#include <climits>
#include <bits.h>

using namespace std;

unsigned int compress(unsigned int age, unsigned int grade, char sex, double GPA)
{
	unsigned int info;
	info = 0x00;
	info = setBits(info, 12, 4, age - 3);
	info = setBits(info, 8, 4, grade);

	if( sex == 'M' )
	{
		info = setBit(info, 7, 1);
	}
	else if(sex == 'F')
	{
		info = setBit(info, 7, 0);
	}
	
	GPA += 0.01;
	
	info = setBits(info, 4, 3, GPA);
	
	info = setBits(info, 0, 4, static_cast<int>(10 * GPA) % 10);
	return info;
}
