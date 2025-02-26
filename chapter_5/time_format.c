/*
C Programming - A Modern Approach
Chapter 5 Programming Projects - 2. Write a program that
asks the user for a 24-hour time, then displays the time
in 12-hour format
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a 24-hour time: ");
	int time_military_hour = 0;
	char time_colon = ' ';
	int time_military_minute= 0;
	scanf("%d%c%d", &time_military_hour, &time_colon, &time_military_minute);

	const int CONVERT_TO_NORMAL_TIME = 12;
	int time_converted_hour = 0;
	if(time_military_hour > CONVERT_TO_NORMAL_TIME)
	{
		time_converted_hour = time_military_hour - CONVERT_TO_NORMAL_TIME;
	}
	else
	{
		time_converted_hour = time_military_hour;
	}
	int time_converted_minute = time_military_minute;
	
	const int SINGLE_DIGIT_CHECK = 9;
	const int PLACEHOLDER_ZERO = 0;
	if(time_converted_hour <= SINGLE_DIGIT_CHECK && time_converted_minute <= SINGLE_DIGIT_CHECK)
	{
		printf("%s%d%d%c%d%d\n", "Equivalent 12-hour time: ", PLACEHOLDER_ZERO ,time_converted_hour, ':', PLACEHOLDER_ZERO ,time_converted_minute);
	}
	else if(time_converted_hour <= SINGLE_DIGIT_CHECK)
	{
		printf("%s%d%d%c%d\n", "Equivalent 12-hour time: ", PLACEHOLDER_ZERO ,time_converted_hour, ':', time_converted_minute);
	}
	else if(time_converted_minute <= SINGLE_DIGIT_CHECK)
	{
		printf("%s%d%c%d%d\n", "Equivalent 12-hour time: ", time_converted_hour, ':', PLACEHOLDER_ZERO, time_converted_minute);
	}
	else
	{
		printf("%s%d%c%d\n", "Equivalent 12-hour time: " ,time_converted_hour, ':', time_converted_minute);
	}
	
	return 0;
}