//Your Name
//CS 1337
//Lab 7

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, abc;
	
	//use for loop to keep track of value 'abc' 
	//for the samllest possible value to highest possible value

	cout << "Your Name - CS 1337 - Lab 07\n\n";
	
	for(abc = 100; abc <= 999; abc += 1)
	{
		a = abc/100;
		
		b = abc / 10 % 10;
		
		c = abc / 1 % 10;
		
		if(a + b + c == a * b * c)
		{
			cout << abc << "\n";
		}
	}
	
	return 0;
}