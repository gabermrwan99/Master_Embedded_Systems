/*
 * =======================================================================================================================
 * Name         : EX6_C_Program_to_Swap_Two_Numbers.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX6 C Program to Swap Two Numbers using ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	float a,b,temp;
	printf("Enter value of a : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %.2f\r\n",a);
	printf("After swapping, value of b = %.2f\r\n",b);
	return 0;
}
