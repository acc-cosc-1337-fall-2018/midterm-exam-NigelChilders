#ifndef DOG_H
#define DOG_H
#include "animal.h"

class dog : animal {
public:
	dog() = default;
	void make_sound() const;
private:

protected:

};
/*
Create a dog class with a void make_sound() const function that inherits from animal.
The make_sound function displays Arff to screen.
*/


#endif // !DOG_H
