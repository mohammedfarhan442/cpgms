#include<stdio.h>
 int main()
{
  int rad;
 float pi=3.141, area, cir;
 printf("Enter the radius of circle:");
 scanf("%d", &rad);
  area= pi*rad*rad;
 printf("Area of circel:%f \n", area);
 
 cir= 2*pi*rad;
 printf("Circumference of circle:%f \n", cir);
 return 0;
 }
