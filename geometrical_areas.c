#include <stdio.h>
#include<math.h>
int main()
{
    int Select;
    float side, base, length, breadth, height, area, radius;
 
    printf("-------------------------\n");
    printf(" 1 --> Area of Circle\n");
    printf(" 2 --> Area of Rectangle\n");
    printf(" 3 --> Area of Triangle\n");
    printf(" 4 --> Area of Square\n");
    printf(" 5 --> Area of Cube\n");
    printf(" 6 --> Area of cuboid\n");
    printf("-------------------------\n");
    printf("Select the number to find area\n");
    scanf("%d", &Select);
    switch(Select)
    {
    case 1:                                                              // to find area of ciecle.
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        printf("Area of a circle = %f cm\n", area);
        break;

    case 2:                                                            // to find area of rectangle.
        printf("Enter the breadth and length\n");
        scanf("%f %f", &breadth, &length);
        area = breadth * length;
        printf("Area of a Reactangle = %f cm\n", area);
        break;

    case 3:                                                           //to find area of triangle.
        printf("Enter the base and height\n");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of a Triangle = %f cm\n", area);
        break;

    case 4:                                                         //to find area of Square.
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        printf("Area of a Square=%f cm\n", area);
        break;
   
    case 5:                                                        //to find area of cube.
         printf("Enter the sides of Cube:\n");
         scanf("%f", &side);
         area= 6*side*side;
         printf("Area of Cube:%f cm \n", area);
         break;
      
   case 6:                                                        // to area of cuboid.
         printf("Enter the Length, Breadth and Height of Cuboid: \n");
         scanf("%f%f%f", &length, &breadth, &height);
         area= length*breadth*height;
         printf("Area of Cuboid: %f cm \n", area);
         break;

 
    default:
        printf("Chosice not found!!\n");
      
 
        break;
    }
}
