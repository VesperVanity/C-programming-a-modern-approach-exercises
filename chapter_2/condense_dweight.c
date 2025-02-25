/*
C Programming - A Modern Approach
Chapter 2 Exercises - 3. Condense the dweight.c program by (1) replacinng the assignments
To height, length and width with initializers and (2) removing the weight variable
Instead calculating (volume + 165) / 166 within the last printf
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/24/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	int height = 100;
	int length = 20;
	int width = 40;
	int volume = height * length * width;

	printf("%s%d\n", "Volume: ", (volume + 165) / 166);
	return 0;
}