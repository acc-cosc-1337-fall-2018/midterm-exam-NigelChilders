#include "factorial.h"
#include <iostream>
/*
Create a loop that continues until user wants to exit.
In the loop, prompt user for an integer, call the factorial function with
the user given integer as a function argument, output result to screen.

*/
int main() 
{
	int entry{ 0 };
	char Cont{ 'Y' };
	while (Cont == 'Y' || Cont == 'y') {
		std::cout << "Enter a number to be factorialized:  ";
		std::cin >> entry;
		std::cout << entry << " factorial is:  " << factorialize(entry) << std::endl;
		std::cout << "Again? (Type 'Y' to continue)  ";
		std::cin >> Cont;
	}

	system("Pause");

	return 0;
}
