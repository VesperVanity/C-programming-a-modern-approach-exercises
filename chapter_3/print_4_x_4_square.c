/*
C Programming - A Modern Approach
Chapter 3 Programming Projects - 5. Write a program that
asks the user to enter the numbers from 1 to 16 (in any order)
and then displays the numbers in a 4 by 4 arrangement
followed by the sums of the rows, columns, and diagonals
*/
//////////////////////////////////////////////////////////////////////////////////
//Date: 02/25/25
//Author: VV - VesperVanity - https://github.com/VesperVanity

#include <stdio.h>

int main(void)
{
	printf("%s\n", "Enter the numbers 1-16 in any order: ");
	int num_1; int num_2; int num_3; int num_4;
	int num_5; int num_6; int num_7; int num_8;
	int num_9; int num_10; int num_11; int num_12;
	int num_13; int num_14; int num_15; int num_16;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num_1, &num_2, &num_3, &num_4, &num_5, &num_6, &num_7, &num_8, &num_9, &num_10, &num_11, &num_12, &num_13, &num_14, &num_15, &num_16);

	printf("\n");
	printf("%2d %2d %2d %2d\n", num_1, num_2, num_3, num_4);
	printf("%2d %2d %2d %2d\n", num_5, num_6, num_7, num_8);
	printf("%2d %2d %2d %2d\n", num_9, num_10, num_11, num_12);
	printf("%2d %2d %2d %2d\n", num_13, num_14, num_15, num_16);
	printf("\n");

	int row_1; int row_2; int row_3; int row_4;
	int column_1; int column_2; int column_3; int column_4;
	int diagonal_1; int diagonal_2;

	row_1 = num_1 + num_2 + num_3 + num_4;
	row_2 = num_5 + num_6 + num_7 + num_8;
	row_3 = num_9 + num_10 + num_11 + num_12;
	row_4 = num_13 + num_14 + num_15 + num_16;

	column_1 = num_1 + num_5 + num_9 + num_13;
	column_2 = num_2 + num_6 + num_10 + num_14;
	column_3 = num_3 + num_7 + num_11 + num_15;
	column_4 = num_4 + num_8 + num_12 + num_16;

	diagonal_1 = num_1 + num_6 + num_11 + num_16;
	diagonal_2 = num_4 + num_7 + num_10 + num_13;

	printf("%s%d %d %d %d\n", "Row sums: ", row_1, row_2, row_3, row_4);
	printf("%s%d %d %d %d\n", "Column sums: ", column_1, column_2, column_3, column_4);
	printf("%s%d %d\n", "Diagonal sums: ", diagonal_1, diagonal_2);

	return 0;
}

