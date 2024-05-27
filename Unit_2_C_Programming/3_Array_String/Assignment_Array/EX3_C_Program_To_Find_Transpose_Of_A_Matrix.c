/*
 ====================================================================================================================== 
 Name        : EX3_C_Program_To_Find_Transpose_Of_A_Matrix.c
 Author      : Gaber Mrwan
 Created on  : May 22, 2024
 Description : Unit 2 C-Programming >> Assignment Array >> EX3 C Program To Find Transpose Of A Matrix
 	 	 	   using ANSI-style (c99)
 ====================================================================================================================== 
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
	int matr [20][20];
	//int tran [20][20];
	int i,y,row,col;
	setbuf(stdout,NULL);

	printf("Enter rows and column of matrix: ");
	scanf("%d",&row);
	scanf("%d",&col);

	for (i=0;i<row;i++)
		{
			for (y=0;y<col;y++)
			{
				printf("Enter element a%d%d: ",i+1,y+1);
				scanf("%d",&matr[i][y]);
			}
			y=0;
		}

	printf("\nEntered Matrix: \n");
	for (i=0;i<row;i++)
		{
			for (y=0;y<col;y++)
			{
				printf("%d  ",matr[i][y]);
			}
			y=0;
			printf("\n");
		}

	printf("\nTranspose of Matrix: \n");
	for (i=0;i<col;i++)
			{
				for (y=0;y<row;y++)
				{
					printf("%d  ",matr[y][i]);
				}
				y=0;
				printf("\n");
			}
	return 0;
}

