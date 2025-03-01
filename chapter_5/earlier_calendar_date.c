/*
C Programming - A Modern Approach
Chapter 5 Programming Projects - 9. Write a program that
prompts the user to enter two dates and then indicates which
date comes earlier in the calendar
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 03/01/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter first date (mm/dd/yyyy): ");
	int first_month_input = 0;
	char input_char_1 = ' ';
	int first_day_input = 0;
	char input_char_2 = ' ';
	int first_year_input = 0;
	scanf("%d%c%d%c%d", &first_month_input, &input_char_1, &first_day_input, &input_char_2, &first_year_input);

	//Simple, not accurate measurements
	const int MONTH_DAYS_AMOUNT = 30;
	const int YEAR_DAYS_AMOUNT = 365;

	int first_date_days_amount = 0;
	first_date_days_amount = first_month_input * MONTH_DAYS_AMOUNT;
	first_date_days_amount += first_day_input;
	first_date_days_amount = first_year_input * YEAR_DAYS_AMOUNT;

	printf("%s", "Enter second date (mm/dd/yyyy): ");
	int second_month_input = 0;
	input_char_1 = ' ';
	int second_day_input = 0;
	input_char_2 = ' ';
	int second_year_input = 0;
	scanf("%d%c%d%c%d", &second_month_input, &input_char_1, &second_day_input, &input_char_2, &second_year_input);

	int second_date_days_amount = 0;
	second_date_days_amount = second_month_input * MONTH_DAYS_AMOUNT;
	second_date_days_amount += second_day_input;
	second_date_days_amount = second_year_input * YEAR_DAYS_AMOUNT;

	if(first_date_days_amount < second_date_days_amount)
	{
		printf("%d%c%d%c%d", first_month_input, input_char_1, first_day_input, input_char_2, first_year_input);
		printf("%s", " is earlier than ");
		printf("%d%c%d%c%d\n", second_month_input, input_char_1, second_day_input, input_char_2, second_year_input);
	}
	else if(first_date_days_amount > second_date_days_amount)
	{
		printf("%d%c%d%c%d", second_month_input, input_char_1, second_day_input, input_char_2, second_year_input);
		printf("%s", " is earlier than ");
		printf("%d%c%d%c%d\n", first_month_input, input_char_1, first_day_input, input_char_2, first_year_input);
	}

	return 0;
}