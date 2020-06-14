#include<stdio.h>
int main()

{
	
	int line, row, col, b;
	
	printf("Enter number of lines:\n");
	scanf("%d", &line);
	
	printf("The Pattern is:\n");
	
	for (row=0; row<=line; row++)
	
	{
		
		for(b=1; b<=line-row+1; b++)
		 
		 printf(" ");
		 
		 for (col=1; col<=row; col++)
		 
		 printf(" *");
		 
		 printf(" \n ");
	}
}
