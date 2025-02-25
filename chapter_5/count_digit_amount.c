/*
C Programming - A Modern Approach
Chapter 5 Programming Projects - 1. Write a program that
calculates how many digits a number contains
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter any number that has 1-4 digits: ");
	int input_number = 0;
	scanf("%d", &input_number);

	const int SINGLE_DIGIT_CHECK = 9;
	const int TWO_DIGIT_CHECK = 99;
	const int THREE_DIGIT_CHECK = 999;
	const int FOUR_DIGIT_CHECK = 9999;

	if(input_number <= SINGLE_DIGIT_CHECK)
	{
		printf("%s%d%s\n", "The number ", input_number, " has 1 digit");
	}
	else if(input_number <= TWO_DIGIT_CHECK)
	{
		printf("%s%d%s\n", "The number ", input_number, " has 2 digits");
	}
	else if(input_number <= THREE_DIGIT_CHECK)
	{
		printf("%s%d%s\n", "The number ", input_number, " has 3 digits");
	}
	else if(input_number <= FOUR_DIGIT_CHECK)
	{
		printf("%s%d%s\n", "The number ", input_number, " has 4 digits");
	}
	else
	{
		printf("%s%d%s\n", "The number ", input_number, " has more than 4 digits, wrong input");
	}

	return 0;
}