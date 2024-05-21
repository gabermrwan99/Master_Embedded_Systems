/*
 * =======================================================================================================================
 * Name         : EX2_C_Program_to_Check_Vowel_or_Consonant_Letter.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX2 C Program to check vowel or consonant letter using
 *                ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char x;

	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdin);
	scanf("%c",&x);

	if(x=='a'||x=='i'||x=='e'||x=='u' || x=='A'||x=='I'||x=='E'||x=='U')
		printf("\r\n%c is a vowel.", x);
	else
		printf("\r\n%c is a consonant.", x);


	return 0;
}
