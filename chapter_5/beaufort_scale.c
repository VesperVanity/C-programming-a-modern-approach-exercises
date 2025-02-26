/*
C Programming - A Modern Approach
Chapter 5 Programming Projects - 4. Write a program that
asks the user to enter a wind speed (in knots), then
displays the corresponding description
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/26/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter wind speed in knots: ");
	int input_knots = 0;
	scanf("%d", &input_knots);

	if(input_knots < 1)
	{
		printf("%s\n", "Calm");
	}
	else if(input_knots >= 1 && input_knots <= 3)
	{
		printf("%s\n", "Light air");
	}
	else if(input_knots >= 4 && input_knots <= 27)
	{
		printf("%s\n", "Breeze");
	}
	else if(input_knots >= 28 && input_knots <= 47)
	{
		printf("%s\n", "Gale");
	}
	else if(input_knots >= 48 && input_knots <= 63)
	{
		printf("%s\n", "Storm");
	}
	else if(input_knots > 63)
	{
		printf("%s\n", "Hurricane");
	}

	return 0;
}