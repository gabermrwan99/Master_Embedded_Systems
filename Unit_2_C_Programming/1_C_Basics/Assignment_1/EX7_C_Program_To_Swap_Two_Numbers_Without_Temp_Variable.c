/*
 * =======================================================================================================================
 * Name         : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX7 Swap Two Numbers Without Temp Variable using
 *                ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	float a,b;
	printf("Enter value of a : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	a = a+b;
	b = a+b;
	a = b-a;
	b = b-a;
	b = b-a;
	printf("After swapping, value of a = %.2f\r\n",a);
	printf("After swapping, value of b = %.2f\r\n",b);
	return 0;
}
