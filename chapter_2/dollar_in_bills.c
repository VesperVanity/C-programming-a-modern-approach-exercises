/*
C Programming - A Modern Approach
Chapter 2 Programming Projects - 7. Write a program that asks
the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/24/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a dollar amount to translate into bills: ");
	int input_dollar_amount = 0;
	scanf("%d", &input_dollar_amount);

	const int bill_20_dollar_worth = 20;
	const int bill_10_dollar_worth = 10;
	const int bill_5_dollar_worth = 5;
	const int bill_1_dollar_worth = 1;

	int bill_20_dollar_amount = input_dollar_amount / bill_20_dollar_worth;
	input_dollar_amount -= bill_20_dollar_amount * bill_20_dollar_worth;
	int bill_10_dollar_amount = input_dollar_amount / bill_10_dollar_worth;
	input_dollar_amount -= bill_10_dollar_amount * bill_10_dollar_worth;
	int bill_5_dollar_amount = input_dollar_amount / bill_5_dollar_worth;
	input_dollar_amount -= bill_5_dollar_amount * bill_5_dollar_worth;
	int bill_1_dollar_amount = input_dollar_amount / bill_1_dollar_worth;
	input_dollar_amount -= bill_1_dollar_amount * bill_1_dollar_worth;

	printf("%s%d\n", "$20 bills: ", bill_20_dollar_amount);
	printf("%s%d\n", "$10 bills: ", bill_10_dollar_amount);
	printf("%s%d\n", " $5 bills: ", bill_5_dollar_amount);
	printf("%s%d\n", " $1 bills: ", bill_1_dollar_amount);

	return 0;
}