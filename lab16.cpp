//Your Name
//CS 1337
//Lab 16

#include <iostream> 

using namespace std;

unsigned int encrypt(unsigned int abcd)
{
	unsigned int a, b, c, d;
	
	
		a = abcd / 1000;
		b = abcd / 100 % 10;
		c = abcd / 10 % 10;
		d = abcd % 10;
		
		a = (a + 7) % 10;
		b = (b + 7) % 10;
		c = (c + 7) % 10;
		d = (d + 7) % 10;

	
	abcd = (c * 1000) + (d * 100) + (a * 10) + (b * 1);
	
	return abcd;
	
}