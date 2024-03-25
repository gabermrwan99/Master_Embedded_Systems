/*
 * =======================================================================================================================
 * Name         : EX1_C_Program_to_Check_a_Number_Is_Even.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX1 C Program to check a number is even using
 *                ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int x;
	printf("Enter an integer You want to check: ");
	fflush(stdin);fflush(stdin);
	scanf("%d",&x);
	if(x%2 == 0)
		printf("\r\n%d is even",x);
	else
		printf("\r\n%d is odd",x);

	return 0;
}
