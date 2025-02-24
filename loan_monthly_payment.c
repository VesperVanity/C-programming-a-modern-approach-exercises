/*
C Programming - A Modern Approach
Chapter 2 Programming Projects - 8. Write a program that calculates
the remaining balance on a loan after the first, second, and
third monthly payments
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/24/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter amount of loan: ");
	float loan = 0.0f;
	scanf("%f", &loan);
	printf("%s", "Enter interest rate: ");
	float interest_rate = 0.0f;
	scanf("%f", &interest_rate);
	printf("%s", "Enter monthly payment: ");
	float monthly_payment = 0.0f;
	scanf("%f", &monthly_payment);

	const float MONTHLY_INTEREST = (interest_rate / 100) / 12;
	float first_payment_balance = (loan - monthly_payment) + (loan * MONTHLY_INTEREST);
	printf("%s%.2f\n", "Balance remaining after first payment: ", first_payment_balance); 
	float second_payment_balance = (first_payment_balance - monthly_payment) + (first_payment_balance * MONTHLY_INTEREST);
	printf("%s%.2f\n", "Balance remaining after second payment: ", second_payment_balance);
	float third_payment_balance = (second_payment_balance - monthly_payment) + (second_payment_balance * MONTHLY_INTEREST);
	printf("%s%.2f\n", "Balance remaining after third payment: ", third_payment_balance);  

	return 0;
}