#include "dive_log.h"

int dive_log::get_avg_sacr() {
	int average{ 0 };
	int counter{ 0 };
	for (auto i : log) {
		average = average + i.get_sacr();
		counter++;
	}
	average = average / counter;

	return average;
}

void dive_log::add_dive(dive d) {
	log.push_back(d);
}
