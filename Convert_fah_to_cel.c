#include<stdio.h> 
 int main ()
 {
  float fah, cel;
 printf("Enter Farhrenheit: \n");
  scanf("%f", &fah);
 cel= (fah-32)*5/9;

 printf("Celsius: %f \n", cel);
 return 0;
 
 }
