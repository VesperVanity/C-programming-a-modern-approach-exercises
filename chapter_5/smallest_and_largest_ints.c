/*
C Programming - A Modern Approach
Chapter 5 Programming Projects - 7. Write a program that
finds the largest and smallest of four integers entered by the user
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/26/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter four integers: ");
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = 0;
	int num_4 = 0;
	scanf("%d%d%d%d", &num_1, &num_2, &num_3, &num_4);

	int largest_number = 0;
	int second_largest_number = 0;
	int second_smallest_number = 0;
	int smallest_number = 0;

	if(num_1 >= num_2)
	{
		largest_number = num_1;
		smallest_number = num_2;
	}
	else
	{
		largest_number = num_2;
		smallest_number = num_1;
	}
	if(num_3 >= num_4)
	{
		second_largest_number = num_3;
		second_smallest_number = num_4;
	}
	else
	{
		second_largest_number = num_4;
		second_smallest_number = num_3;
	}
	if(second_largest_number > largest_number)
	{
		largest_number = second_largest_number;
	}
	if(second_smallest_number < smallest_number)
	{
		smallest_number = second_smallest_number;
	}

	printf("\n%s%d\n%s%d\n", "Largest nunber: ", largest_number, "Smallest number: ", smallest_number);

	return 0;
}