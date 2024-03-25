/*
 * =======================================================================================================================
 * Name         : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 1 C-Basics >> EX2 C Program to Print a Integer Entered by a User using
 *                Ansi_style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>

int main (void)
{
	int x;
	printf("Enter an integer number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
	return 0;
}
