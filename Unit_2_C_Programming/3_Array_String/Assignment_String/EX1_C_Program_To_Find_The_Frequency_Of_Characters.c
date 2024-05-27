/*
 ====================================================================================================================== 
 Name        : EX1_C_Program_To_Find_The_Frequency_Of_Characters.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment String >> EX1 C Program To Find The Frequency Of Characters
 	 	 	   using ANSI-style (c99)
 ====================================================================================================================== 
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
	char string [100];
	char character;
	int frequency=0,i;

	setbuf(stdout,NULL);
	printf("Enter a string: ");
	fgets(string ,sizeof(string) ,stdin);

	printf("Enter a character to find: ");
	scanf("%c",&character);

	for (i=0 ;i<sizeof(string) ;i++)
	{
		if (string[i] == character)
		{
			frequency += 1;
		}
	}

	printf("Frequency of %c = %d",character,frequency);

	return 0;
}
