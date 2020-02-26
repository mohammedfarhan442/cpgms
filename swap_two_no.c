#include<stdio.h>
 int main() 
{
 int s, x, y;
 printf("Enter the first value:");
 scanf("%d", &x);
printf("Enter the second value:");
 scanf("%d", &y);
 
 s=x;
 x=y;
 y=s;
 
 printf("Swapping of two numbers: x=%d, y=%d \n", x,y);
 return 0;
}
