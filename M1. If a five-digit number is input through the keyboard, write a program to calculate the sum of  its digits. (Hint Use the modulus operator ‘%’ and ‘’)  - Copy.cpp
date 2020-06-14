#include<stdio.h>

 int main()
 
{
	int a, b, c, d, e, n, sum=0;
	
	
	printf("Enter the five digits: \n");
	scanf("%d", &n);
	
	a= (n/10000);
 
    b=(n%10000)/1000;
 
    c=(n%1000)/100;
 
    d=(n%100)/10;
 
    e=n%10;
 
    sum=a+b+c+d+e;

    printf("Sum of digits: %d \n", sum);
}
