#include <stdio.h>
int main()
{
 int a,b,c;
 int sum, sub, multi, mode;
float div;
  
printf("Enter Three numbers:");
 scanf("%d%d%d", &a, &b, &c);
 
sum= a+b+c;
sub= a-b-c;
multi= a*b*c;
mode= a%b%c;
 div= a/b/c;
 
 printf("Sum:%d \n", sum);
 printf("Sub:%d \n", sub);
 printf("Multi:%d \n", multi); 
 printf(" Moduls:%d \n", mode);
 printf(" Quotient:%f \n", div);
 return 0;
 }
 
