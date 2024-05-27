/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Insert_An_Element_in_a_Array.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment Array >> EX4 C Program To Insert An Element in a Array
 	 	 	   using ANSI-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
	int array [20];
	int i,no,ele,loc;

	setbuf(stdout,NULL);
	printf("Enter no of elements : ");
	scanf("%d",&no);

	for (i = 0; i < no; i++)
		{
			scanf("%d", &array[i]);
		}

	printf("\n Enter the element to be inserted : ");
	scanf("%d",&ele);
	printf("enter the location : ");
	scanf("%d",&loc);

	for (i=no-1; i>0; i--)
		{
		array[i+1]=array[i];
		if (array[i] == loc)
		{
			array[i]=ele;
		}

		}

	for (i=0; i<no+1; i++)
		{
			printf("%d ",array[i]);
		}
	return 0;
}
