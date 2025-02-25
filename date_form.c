/*
C Programming - A Modern Approach
Chapter 3 Programming Projects - 1. Write a program that
accepts a date from the user in the form mm/dd/yyyy and
then displays it in the form yyyymmdd
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s\n", "Type a date with format mm/dd/yyyy: ");
	int month = 0;
	int day = 0;
	int year = 0;
	scanf("%d%d%d", &month, &day, &year);
	printf("%s%4d %s%2d %s%2d\n", "Year: ", year, " Month: ", month, " Day: ", day);
	return 0;
}