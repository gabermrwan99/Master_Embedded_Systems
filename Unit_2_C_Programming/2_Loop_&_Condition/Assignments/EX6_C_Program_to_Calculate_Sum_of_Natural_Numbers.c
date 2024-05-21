/*
 * =======================================================================================================================
 * Name         : EX6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 4 / 2024
 * Description  : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX6 C Program to calculate sum of natural numbers using
 *                ANSI-style (c99)
 * =======================================================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int i, sum= 0, x;

	fflush(stdin);fflush(stdin);
	printf("Enter an integer: ");
	scanf("%d",&x);

	for (i=0; i<=x; i++)
	{
		sum += i;
	}

	printf("\r\n sum = %d",sum);

	return 0;
}
