/*
C Programming - A Modern Approach
Chapter 5 Programming Projects - 5. Write a program that
asks the user to enter the amount of taxable income
then displays the tax due
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/26/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the amount of taxable income: ");
	float money_input = 0.0f;
	scanf("%f", &money_input);

	if(money_input < 750)
	{
		printf("%s\n", "Not over $750	1% of income");
	}
	else if(money_input >= 750 && money_input <= 2250)
	{
		printf("%s\n", "$750-$2250	1% of income	plus 2% of amount over 750");
	}
	else if(money_input >= 2250 && money_input <= 3750)
	{
		printf("%s\n", "$2250-$3750	1% of income	plus 3% of amount over 2250");
	}
	else if(money_input >= 3750 && money_input <= 5250)
	{
		printf("%s\n", "$3750-$5250	1% of income	plus 4% of amount over 3750");
	}
	else if(money_input >= 5250 && money_input <= 7000)
	{
		printf("%s\n", "$5250-$7000	1% of income	plus 5% of amount over 5250");
	}
	else if(money_input > 7000)
	{
		printf("%s\n", "Over $7000	1% of income	plus 6% of amount over 7000");
	}

	return 0;
}