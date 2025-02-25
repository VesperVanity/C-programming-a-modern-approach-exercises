/*
C Programming - A Modern Approach
Chapter 2 Programming Projects - 2. Write a program that computes
the volume of a sphere with a 10-meter radius, using the
formula v = 4/3 PI r^3
Write the fraction 4/3 as 4.0f/3.0f
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/24/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter the radius in meters to calculate the sphere volume: ");
	float input_radius = 0.0f;
	scanf("%f", &input_radius);
	const float PI = 3.1415926535f;
	float volume = (4.0f / 3.0f * PI) * input_radius * input_radius * input_radius;
	printf("%s%.2f%s\n", "The volume of the sphere is: ", volume, " meters^3"); 
	return 0;
}