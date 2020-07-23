//Your Name
//CS 1337
//Lab 12

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, ab, abcde;
	
	//use for loop to keep track of value 'abcde' 
	//for the samllest possible value to highest possible value

	//Output ID line
	cout << "Your Name - CS 1337 - Lab 12\n\n";
	
	//Variables
	for(abcde = 10000; abcde <= 99999; abcde += 1)
	{
		a = abcde / 10000 % 10;
		
		b = abcde / 1000 % 10;
		
		c = abcde / 100 % 10;
		
		d = abcde / 10 % 10;
		
		e = abcde / 1 % 10;
		
		ab = a * 10 + b * 1;
		
		//Output result(s)
		if(ab == d * e && b == 4 * e && e == d - 7 && c == a + b )
		{
			cout << abcde << "\n";
		}
	}
	
	return 0;
}