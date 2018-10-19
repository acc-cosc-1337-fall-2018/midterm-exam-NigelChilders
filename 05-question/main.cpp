//Don't forget includes!!!!!
#include "animal.h"
#include "cat.h"
#include "dog.h"

/*
POINTS FOR THIS QUESTION: 30

Create an instance of an Animal class and call the make_sound function.
Create an instance of an Dog class and call the make_sound function.
Create an instance of an Cat class and call the make_sound function.

Create an Animal reference to the dog instance and call the make_sound function.
*/
int main() 
{
	animal thing;
	thing.make_sound();
	cat neko;
	neko.make_sound();
	dog inu;
	inu.make_sound();

	return 0;
}
