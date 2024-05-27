/*
 ====================================================================================================================== 
 Name        : EX2_C_Program_To_Calculate_Average.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment Array  >> EX2 C Program To Calculate Average
 	 	 	   using ANSI-style (c99)
 ====================================================================================================================== 
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
	float number [30];
	int i,n;
	float sum=0.0;

	setbuf(stdout,NULL);
	printf("Enter the number of data: ");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		scanf("%f",&number[i]);
		sum += number[i];
	}

	printf("Average = %.2f",sum/n);

	return 0;
}
