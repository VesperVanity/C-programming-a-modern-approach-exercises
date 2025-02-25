/*
C Programming - A Modern Approach
Chapter 2 Programming Projects - 5. Write a program that asks
the user to enter a value of x and then displays the value of the
following polynomial:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/24/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter X: ");
	int x = 0;
	scanf("%d", &x);
	int x_expo_5 = (x * x * x * x * x * x);
	int x_expo_4 = (x * x * x * x * x);
	int x_expo_3 = (x * x * x * x);
	int x_expo_2 = (x * x * x);
	int calc_1 = 3 * x_expo_5;
	int calc_2 = 2 * x_expo_4;
	int calc_3 = 5 * x_expo_3;
	int calc_4 = x_expo_2;
	int calc_5 = 7 * x;
	int result = 0;
	result = calc_1 + calc_2 - calc_3 - calc_4 + calc_5 - 6;
	printf("%s%d", "Result is: ", result);
	return 0;
}