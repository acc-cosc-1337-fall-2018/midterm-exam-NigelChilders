#include "evaluation.h"
#include <iostream>
//SAMPLE FUNCTION code
int sum_numbers(int num1, int num2) 
{
	return num1 + num2;
}

void faculty_evaluation(int responses, int alw, int voft, int oft, std::string& result) {
	double AlwRank = alw * 100 / responses; //std::cout << "AlwRank is: " << AlwRank << std::endl; 
	double VofRank = voft * 100 / responses; //std::cout << "VofRank is: " << VofRank << std::endl;
	double OftRank = oft* 100 / responses; //std::cout << "OftRank is: " << OftRank << std::endl;
	double FinCheck = AlwRank + VofRank; //std::cout << "FinCheck is: " << OftRank << std::endl;

	if (FinCheck >= 90) {
		result = "Excellent";
	}else if (FinCheck >= 80) {
		result = "Good";
	}else { result = "Needs Improvement"; }
}

/*
POINTS FOR THIS QUESTION: 10

The following table describes how a Faculty rating is calculated

Response       |	Response Count | CalculatePercentage |	Percentage
------------------------------------------------------------------------
Always(alw)	                   188	    188 / 200 * 100           94
Very Often(voft)	             8	     8 / 200  * 100            4
Often(oft)	                     4	     4 / 200  * 100            2
========================================================================

Student Evaluation |    Rating Cutoff
------------------------------------------------------------------------
Excellent          |    Always + Very Often >= 90%
Good               |    Always + Very Often >= 80%
Needs Improvement  |    Lesser Combinations
=========================================================================
The rating for this table is Excellent because Always 95.4 + Very Often >= 90.


Create a function named faculty_evaluation that accepts an int parameter named responses,
int alw, int voft, int oft (see table for mapping to text Response),
and a reference string parameter named result that will hold the student evaluation result. 

1) Don't forget to go to test_cases.cpp in the test-cases folder to create the test cases
for this question!
2) Go to main.cpp to write code to call this function.

*/