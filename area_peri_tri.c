#include <stdio.h>
#include<math.h>
 int main()
 {
 float l,b,h,p,area;
 printf("Enter the Sides of triangle:");
 scanf("%f%f%f", &l,&b, &h);
 p= (l+b+h)/2;
 area= sqrt(p*(p-l)*(p-b)*(p-h));
 printf("Area of triangle: %f \n", area);
 printf("Perimeter of triangle:%f \n", p);
return 0;
 }
