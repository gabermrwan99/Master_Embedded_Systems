/*
 * =======================================================================================================================
 * Name         : EX8_C_Program_to_Make_a_Simple_Calculator_Using_Switch_Case.c
 * Author       : Gaber Mrwan
 * Created on   : Mar 3 / 2024
 * Description  : Unit 2 C-Programming >> Assignment 2 C-Basic >> EX8 C Program to make a simple calculator using
 *                switch...case using ANSI-style (c99)
 * =======================================================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	float x,y;
	char op;

	setbuf(stdout,NULL);
	printf("Enter operator either <+> or <-> or <*> or </> : ");
	scanf("%c",&op);
	printf("\r\nEnter two operands : ");
	scanf("%f",&x);
	scanf("%f",&y);

	switch(op)
	{
	case '*':
	{
		printf(" %.1f",x*y);
		break;
	}
	case '+':
	{
		printf("%.1f",x+y);
		break;
	}
	case '-':
	{
		printf("%.1f",x-y);
		break;
	}
	case '/':
	{
		printf("%.1f",x/y);
		break;
	}
	}
	return 0;
}
