#include<stdio.h>
 int main()

{
 int n, reversedN=0, reminder, originalN;
 printf("Enter an Integer:\n");
 scanf("%d", &n);
 
 originalN= n;
 while (n!=0)
{ 
 reminder= n%10;
 reversedN = reversedN*10+reminder;
 n/=10;
 }

if (originalN== reversedN)
 
 printf("is a palindrome: %d \n", originalN);
 return 0;
 }
