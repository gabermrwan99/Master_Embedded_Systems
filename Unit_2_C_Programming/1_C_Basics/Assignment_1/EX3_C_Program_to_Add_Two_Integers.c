/*
 * =======================================================================================================================
 * Name         : EX3_C_Program_to_Add_Two_Integers.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX3 C Program to Add Two Integers using ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int x,y;

	printf("Enter two integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Sum: %d",x+y);

	return 0;
}
