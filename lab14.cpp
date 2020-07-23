//Your Name
//CS 1337
//Lab 14

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	cout << "Your Name - CS 1337 - Lab 14\n\n";
	cout << "-----------------------\n";
	cout << "  Input      Formatted\n";
	cout << "-----------------------\n";
	
	//Variables
	int ssn, areaNum, groupNum, serialNum;
	
	while (cin >> ssn)
	{
		//FIXME: Format and output correcrtly here!
		
		cout << setfill ('0') << setw(9) << ssn;
		areaNum = ssn / 1000000;
		groupNum = ssn / 10000 % 100;
		serialNum = ssn % 10000;
		cout << "   " 
		<< setfill ('0') << setw (3) << areaNum << "-" 
		<< setw (2) << groupNum << "-" 
		<< setw (4) << serialNum <<"\n";
		
	}
	
	cout << "-----------------------\n";

	
	return 0;
}