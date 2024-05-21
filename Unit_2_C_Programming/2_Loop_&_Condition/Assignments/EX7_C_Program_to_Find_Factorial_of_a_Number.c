/*
 * =======================================================================================================================
 * Name         : EX7_C_Program_to_Find_Factorial_of_a_Number.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3 / 2024
 * Description  : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX7 C Program to find factorial of a number using
 *                ANSI-style (c99)
 * =======================================================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int i, fac= 1, x;

	fflush(stdin);fflush(stdin);
	printf("Enter an integer: ");
	scanf("%d",&x);

	if (x > 0)
	{
		for (i=1; i<=x; i++)
		{
			fac *= i;
		}

		printf("\r\n Factorial = %d",fac);
	}
	else if (x < 0)
	{
		printf("\r\nError!!! Factorial of negative number does not exist.");
	}
	else
	{
		printf("\r\nFactorial of zero is 1");
	}
	return 0;
}

