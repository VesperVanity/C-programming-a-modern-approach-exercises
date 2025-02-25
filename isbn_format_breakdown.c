/*
C Programming - A Modern Approach
Chapter 3 Programming Projects - 3. Write a program that
breaks down an ISBN entered by the user
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter ISBN: 123 1 123 12345 1 - ");
	int gsi_prefix = 0;
	int group_identifier = 0;
	int publisher_code = 0;
	int item_number = 0; 
	int check_digit = 0;
	scanf("%d%d%d%d%d", &gsi_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("%s%d\n", "GSI prefix: ", gsi_prefix);
	printf("%s%d\n", "Group identifier: ", group_identifier);
	printf("%s%d\n", "Publisher code: ", publisher_code);
	printf("%s%d\n", "Item number: ", item_number);
	printf("%s%d\n", "Check digit: ", check_digit);
	
	return 0;
}