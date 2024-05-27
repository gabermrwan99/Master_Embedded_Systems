/*
 ====================================================================================================================== 
 Name        : EX5_C_Program_To_Search_an_Element_In_Array.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment Array >> EX5 C Program To Search an Element In Array
 	 	 	   using ANSI-style (c99)
 ====================================================================================================================== 
 */


#include <stdio.h>
#include <string.h>

int main (void)
{
	int arr[20];
	int i,no,ele,loc;

	setbuf(stdout,NULL);
	printf("Enter no of elements : ");
	scanf("%d",&no);

	for (i = 0; i < no; i++)
		{
			scanf("%d", &arr[i]);
		}

	printf("\n Enter the element to be searched : ");
	scanf("%d",&ele);

	for (i = 0; i < no; i++)
	{
		if (ele == arr[i])
		{
			loc = i+1;
		}
	}
	printf("Number found at the location = %d",loc);

	return 0;
}
