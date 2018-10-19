#ifndef DIVE_LOG_H
#define DIVE_LOG_H
#include <vector>
#include "dive.h"

using std::vector;

class dive_log {
public:
	dive_log() = default;
	dive_log(vector<dive> l) : log(l) {};
	int get_avg_sacr();
	void add_dive(dive d);
private:
	std::vector<dive> log;

protected:

};
/*
POINTS FOR THIS QUESTION: 25

Create a DiveLog class which has a vector of Dive objects plus a DiveLog.get_avg_sacr() function. 
Also add an add_dive function to add Dive instances into the vector.
The get_avg_sacr class function returns the average of the Dive's get_sacr function.
*/



#endif // !DIVE_LOG_H
