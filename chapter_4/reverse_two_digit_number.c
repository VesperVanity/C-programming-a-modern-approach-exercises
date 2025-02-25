/*
C Programming - A Modern Approach
Chapter 4 Programming Projects - 1. Write a program that
asks the user to enter a two-digit number, then prints
the number with its digits reversed
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a two-digit number: ");
	int number = 0;
	scanf("%d", &number);
	int digit_1 = number % 10;
	int digit_2 = number / 10;
	printf("%s%d%d\n", "The reversed number is: ", digit_1, digit_2);
	return 0;
}