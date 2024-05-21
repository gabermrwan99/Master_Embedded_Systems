/*
 * =======================================================================================================================
 * Name         : EX3_C_Program_to_Find_The_Largest_Number.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX3 C Program to find the largest number using
 *                ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	float x,y,z;

	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdin);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);

	if(x>y)
	{
		if(x>z)
			printf("\r\nlargest number is %.2f",x);
		else
			printf("\r\nlargest number is %.2f",z);
	}
	else
		printf("\r\nlargest number = %.2f",y);

	return 0;
}
