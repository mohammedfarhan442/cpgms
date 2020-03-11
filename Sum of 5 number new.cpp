#include<stdio.h>
int main()
{ int i,n, d, s=0;

	printf("Enter five digit numbers: \n");
	scanf("%d", &n);
	for (i=n; i!=0; i= i/10)
	 {
	 	d= i%10;
	 	s= s+d;
	 	
	 }
	 printf("Sum of all numbers: %d \n", s);
	 
}
