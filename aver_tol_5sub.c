#include <stdio.h>
 int main()
 { 
 float a, b, c, d, e;
 float total, average;
 printf("Enter five subjects marks: \n");
 scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
 
 total= a+b+c+d+e;
 average= (a+b+c+d+e)/5.00;
 
 printf(" Total Sum of marks: %f \n", total);
 printf(" Average of Marks:%f \n", average);
 return 0;
 }
