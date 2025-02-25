/*
C Programming - A Modern Approach
Chapter 3 Programming Projects - 2. Write a program that
formats product information entered by the user
The item number and date should be left justified
the unit price should be right justified
Allow dollar amounts up to $9999.99
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter item number: ");
	int item_number = 0;
	scanf("%d", &item_number);

	printf("%s", "Enter unit price: ");
	float unit_price = 0.0f;
	scanf("%f", &unit_price);

	printf("%s\n", "Enter purchase date (mm/dd/yyyy): ");
	int month = 0;
	int day = 0;
	int year =0;
	scanf("%d%d%d", &month, &day, &year);

	printf("%-s 			%s 				%-s\n", "Item", "Unit", "Purchase");
	printf("		 	%s 				%-s\n", "Price", "Date");
	printf("%-d 			%s%4.2f			%-2d\\%-2d\\%-4d\n", item_number, "$ ", unit_price, month, day, year);
	return 0;
}