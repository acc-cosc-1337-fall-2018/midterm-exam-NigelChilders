#ifndef DIVE_H
#define DIVE_H
class dive {
public:
	dive() = default;
	dive(int d, int s, int f, int t) : depth(d), start_p(s), final_p(f), time(t) {};
	int get_sacr();

private:
	int depth{ 0 };
	int start_p{ 0 };
	int final_p{ 0 };
	int time{ 0 };

protected:

};
/*
POINTS FOR THIS QUESTION: 25

The Dive Class. You will want to create a Dive class that contains class data which include
start pressure, finish pressure, time and depth. Typical values are a starting pressure of 
3000, ending pressure of 700, depth of 30 to 80 feet and times of 30 minutes (at 80 feet) to
60 minutes (at 30 feet). SACR’s are typically between 10 and 20. Your Dive class should have
a function named Dive.get_sacr() which returns the SACR for that dive.

Class data members:
d = depth in feet
s = starting pressure
f = final pressure
t = time in minutes

Formula for normalized air consumption (Surface Air Consumption Rate---sacr):
sacr = 33(s - f) / t(d + 33)

Assume users will always give you good data, there's no need for data validation.
FOCUS ON CREATING THE CLASS STRUCTURE.

*/
//WRITE CLASS header here






#endif // !DIVE_H

