#include "factorial.h"
//SAMPLE FUNCTION CODE
int multiply_numbers(int num1, int num2) 
{
	return num1 * num2;
}

int factorialize(int value)
{
	int Factory{ 1 };
	for (int i = value; i > 0; i--) {
		Factory = Factory * i;
	}
	return Factory;
}

/*
POINTS FOR THIS QUESTION: 10

What is factorial? The product of the integer itself and all those before it.
Example, factorial of 5 is 1 x 2 x 3 x 4 x 5.  
The factorial function will have one int reference parameter and will return an int.
The function should work for any number.

1) Don't forget to go to test_cases.cpp in the test-cases folder to create the test cases
for this question!
2) Go to main.cpp to write code to call this function.
*/
