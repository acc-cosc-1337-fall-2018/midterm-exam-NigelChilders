#include "dive.h"

int dive::get_sacr()
{
	return (33 * (start_p - final_p)) / (time * (depth + 33));
}
