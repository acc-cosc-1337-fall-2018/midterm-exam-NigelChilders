//Don't forget includes!!!!!
#include "dive_log.h"
#include <iostream>
/*
Create an instance of DiveLog class.
Add three dive classes to the DiveLog class:
The Dive class 1 data member are:
d = depth in feet = 55
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

The Dive class 2 data member are:
d = depth in feet = 67
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

The Dive class 3 data member are:
d = depth in feet = 67
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

Output The DiveLog get_avg_sacr to screen. (should return 23)

*/
int main() 
{
	dive_log trip;
	dive scuba(55, 3000, 1000, 30);
	std::cout << "Trip 1:  " << scuba.get_sacr() << std::endl;
	trip.add_dive(scuba);
	dive scuba2(67, 3000, 1000, 30);
	std::cout << "Trip 2:  " << scuba2.get_sacr() << std::endl;
	trip.add_dive(scuba2);
	dive scuba3(67, 3000, 1000, 30);
	std::cout << "Trip 3:  " << scuba3.get_sacr() << std::endl;
	trip.add_dive(scuba3);
	std::cout << "Average: " << trip.get_avg_sacr() << std::endl;

	system("pause");

	return 0;
}
