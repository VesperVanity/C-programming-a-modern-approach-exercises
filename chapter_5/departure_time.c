/*
C Programming - A Modern Approach
Chapter 5 Programming Projects - 8. Write a program that
asks the user to enter a time (expressed in hours and minutes,
using the 24-hour clock)
The program then displays the departure and arrival times
for the flight whose depature time is closest to that entered
by the user
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/27/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	const int FULL_HOUR = 60;
	const int FLIGHT_1_TIME = 8 * FULL_HOUR;
	const int FLIGHT_2_TIME = 9 * FULL_HOUR + 43;
	const int FLIGHT_3_TIME = 11 * FULL_HOUR + 19;
	const int FLIGHT_4_TIME = 12 * FULL_HOUR + 47;
	const int FLIGHT_5_TIME = 14 * FULL_HOUR;
	const int FLIGHT_6_TIME = 15 * FULL_HOUR + 45;
	const int FLIGHT_7_TIME = 19 * FULL_HOUR;
	const int FLIGHT_8_TIME = 21 * FULL_HOUR + 45;

	printf("%s", "Enter a time (hh:mm) military format: ");
	int input_hour = 0;
	char input_colon = ' ';
	int input_minute = 0;
	scanf("%d%c%d", &input_hour, &input_colon, &input_minute);

	int input_converted_time = input_hour * FULL_HOUR + input_minute;
	if(input_converted_time < FLIGHT_1_TIME)
	{
		printf("%s\n", "Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
	}
	else if(input_converted_time < FLIGHT_2_TIME)
	{
		printf("%s\n", "Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	}
	else if(input_converted_time < FLIGHT_3_TIME)
	{
		printf("%s\n", "Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
	}
	else if(input_converted_time < FLIGHT_4_TIME)
	{
		printf("%s\n", "Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
	}
	else if(input_converted_time < FLIGHT_5_TIME)
	{
		printf("%s\n", "Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
	}
	else if(input_converted_time < FLIGHT_6_TIME)
	{
		printf("%s\n", "Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
	}
	else if(input_converted_time < FLIGHT_7_TIME)
	{
		printf("%s\n", "Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
	}
	else if(input_converted_time < FLIGHT_8_TIME)
	{
		printf("%s\n", "Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
	}

	return 0;
}