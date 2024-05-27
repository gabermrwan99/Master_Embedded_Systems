/*
 ====================================================================================================================== 
 Name        : EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment Array >> EX1 C Program To Find Sum Of Two Matrix Of Order 2x2
 	 	 	   using ANSI-style (c99)
 ====================================================================================================================== 
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
	float mat1 [2][2];
	float mat2 [2][2];
	int r,c;
	setbuf(stdout,NULL);

	printf("Enter the element of 1st matrix \n");
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1,c+1);
			scanf("%f",&mat1[r][c]);
		}
		c=0;
	}

	printf("Enter the element of 2nd matrix \n");
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1,c+1);
			scanf("%f",&mat2[r][c]);
		}
		c=0;
	}

	printf("\nSum of matrix:\n");
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("%.1f ",mat1[r][c]+mat2[r][c]);
		}
		c=0;
		printf("\n");
	}

	return 0;
}
