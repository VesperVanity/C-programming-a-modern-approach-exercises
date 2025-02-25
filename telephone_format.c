/*
C Programming - A Modern Approach
Chapter 3 Programming Projects - 4. Write a program that
prompts the user to enter a telephone number in the form (xxx) xxx-xxxx
and then displays the number in the form xxx.xxx.xxxx
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter phone number [xxx xxx xxxx] : ");
	int number_part_1 = 0;
	int number_part_2 = 0;
	int number_part_3 = 0;
	scanf("%d%d%d", &number_part_1, &number_part_2, &number_part_3);

	printf("%s%d%c%d%c%d%c\n", "You entered ", number_part_1, '.', number_part_2, '.', number_part_3, '.');
	
	return 0;
}