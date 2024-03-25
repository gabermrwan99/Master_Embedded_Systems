/*
 * =======================================================================================================================
 * Name         : EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3, 2024
 * Description  : Unit 2 C-Programming >> Assignment 1 C-Basic >> EX4 C Program to Multiply two Floating PointNumbers
 *                using ANSI-style (c99)
 * =======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	float x,y;

	printf("Enter two numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	printf("Product: %f",x*y);

	return 0;
}
