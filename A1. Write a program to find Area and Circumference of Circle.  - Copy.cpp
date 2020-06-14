 
   #include<stdio.h>
  
   int main() 
   
   {
 
   int rad;
   
   float PI = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   
   printf("\nArea of circle : %f cm", area);
 
   ci = 2 * PI * rad;
   
   printf("\nCircumference : %f cm ", ci);
 
   return (0);
   
   } 

