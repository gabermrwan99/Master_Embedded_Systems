/*
 * =======================================================================================================================
 * Name         : EX5_C_Program_to_Check_a_Character_is_an_Alphabet_or_Not.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 4 / 2024
 * Description  :  Unit 2 C-Programming >> Assignment 2 C-Basic >> EX5 C Program to check a character is an alphabet
 *                 or not using ANSI-style (c99)
 * =======================================================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	char c;

	fflush(stdin);fflush(stdin);
	printf("Enter a character: ");

	scanf("%c",&c);

	if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'))
		printf("\r\n%c is a character",c);
	else
		printf("\r\n%c is not a character",c);

	return 0;
}
