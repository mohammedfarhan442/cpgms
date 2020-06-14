#include <stdio.h>
#include <math.h>
   
    int main()
{
	 float l, b, h, p, a, area, sp;
	  printf("Enter the side of trinagle: \n");
	  scanf("%f%f%f", &l,&b,&h);
	  
	   p= (l+b+h);
	    
	    sp= p/2.0;
	  
	   a= sqrt(sp*(sp-l)*(sp-b)*(sp-h));
	   
	   printf("Permimerter of triangle: %4f unit\n",p);
	   
	   
	   
	   printf("Area of Triangle: %4f unit \n", a);
	   
	   
	   return 0;
}
