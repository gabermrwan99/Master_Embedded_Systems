/*
 ====================================================================================================================== 
 Name        : EX3_C_Program_to_Reverse_String_Without_Using_Library_Function.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment String >> EX3_C_Program_to_Reverse_String_Without_Using_Library_Function.c
 	 	 	   using ANSI-style (c99)
 ====================================================================================================================== 
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
	char string [100];
	char reverse [100];
	int i,lenght;

	setbuf(stdout,NULL);
	printf("Enter a string: ");
	fgets(string ,sizeof(string) ,stdin);

	lenght = strlen(string);

	for (i=0 ; i<sizeof(string) ; i++)
	{
		reverse[i] = string [lenght-1];
		lenght = lenght - 1;
	}

	printf("Reverse string is : %s",reverse);
	return 0;
}
