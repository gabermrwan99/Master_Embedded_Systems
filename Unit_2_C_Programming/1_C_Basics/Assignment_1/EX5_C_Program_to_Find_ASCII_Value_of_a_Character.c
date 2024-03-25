/*
 * =======================================================================================================================
 * Name         : EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX5 C Program to Find ASCII Value of a Character using
 *                ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char x;
	printf("Enter a character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	printf("ASCII Value of %c = %d",x,x);
	return 0;
}
