/*
C Programming - A Modern Approach
Chapter 2 Programming Projects - 4. Write a program that asks
the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/24/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter dollars and cent amount to compute taxes: ");
	float money = 0.0f;
	scanf("%f", &money);
	const float tax_amount = 5.0f;
	float taxes = money / 100 * tax_amount;
	float money_after_tax = money + taxes;
	printf("%s%.2f\n", "With tax added: ", money_after_tax);
	return 0;
}