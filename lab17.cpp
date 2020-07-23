//Your Name
//CS 1337
//Lab 17

// Function initializeDigits initializes each of the elements in the
// n-element boolean array digits to value
void initializeDigits(bool digits[], int n, bool value)
{
	int i;
	
	for(i = 0; i < n; i += 1)
	{
		digits[i] = value;
	}
}

// Function determineDigits receives as arguments an n-element boolean
// array digits and a five digit number abcde.  The function sets
// digits[i], 0 <= i <= 9, to true if i occurs in the decimal
// representation of abcde.
void determineDigits(bool digits[], int n, int abcde)
{
	int a, b, c, d, e;
	
	a = abcde / 10000 % 10;
	b = abcde / 1000 % 10;
	c = abcde / 100 % 10;
	d = abcde / 10 % 10;
	e = abcde / 1 % 10;
	
	digits[a] = true;
	digits[b] = true;
	digits[c] = true;
	digits[d] = true;
	digits[e] = true;
}	

// Function checkDigits returns true if each of the elements in the
// n-element boolean array digits is true and false otherwise
bool checkDigits(const bool digits[], int n)
{
	int i;
	
	for(i = 0; i < n; i += 1)
	{
		if(digits[i] == false)
		{
		return false;
		}
		
	}
	return true;
}
