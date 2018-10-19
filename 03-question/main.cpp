#include "dive.h"
#include <iostream>

/*
Create an instance of Dive class.
The Dive class data member are:
d = depth in feet = 55
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

Output the function get_sacr to screen (should return 25).
*/
int main() 
{
	dive scuba(55,3000,1000,30);
	std::cout << "SACR value is:  " << scuba.get_sacr() << std::endl;

	system("pause");

	return 0;
}
