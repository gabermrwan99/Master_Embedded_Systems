/*
 * =======================================================================================================================
 * Name         : EX4_C_Program_to_Check_a_Number_is_Positive_or_Negative_or_Zero.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 4 / 2024
 * Description  : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX4 C Program to check a number is positive or negative
 *                or zero using ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int x;

	printf("Enter a number: ");
	fflush(stdin);fflush(stdin);
	scanf("%d",&x);

	if (x<0)
		printf("\r\n%d is Negative",x);
	else if (x>0)
		printf("\r\n%d is positive",x);
	else
		printf("\r\n%d is zero",x);

	return 0;
}
