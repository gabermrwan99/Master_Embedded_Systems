/*
 ====================================================================================================================== 
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment String >> EX2_C_Program_To_Find_The_Length_of_a_String.c
 	 	 	   using ANSI-style (c99)
 ====================================================================================================================== 
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
	char string [100];
	int count=0,i;

	setbuf(stdout,NULL);
	printf("Enter a string: ");
	fgets(string ,sizeof(string) ,stdin);

	for (i=0 ;string[i] != '\0';i++)
	{
		count +=1;
	}

	printf("Length of string : %d",count);
	return 0;
}

