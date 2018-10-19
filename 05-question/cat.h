#ifndef CAT_H
#define CAT_H
#include "animal.h"

class cat : animal {
public:
	cat() = default;
	void make_sound() const;
private:

protected:

};
/*
Create a cat class with a void make_sound() const function that inherits from animal.
The make_sound function displays Meow to screen.
*/



#endif // !CAT_H
