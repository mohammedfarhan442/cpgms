  
#include <stdio.h>
#include<math.h>
int main()
{
    int Select;
    int Steam_Momos, Chowmein, Grilled_Sandwich, Fresh_Juice, Cold_coffe;
 
    printf("-------------------------\n");
    printf("Welcome to Foodland \n");
    printf(" 1 --> Steam Momos \n");
    printf(" 2 --> Chowmein \n");
    printf(" 3 --> Grilled Sandwich \n");
    printf(" 4 --> Fresh Juice \n");
    printf(" 5 --> Cold Coffee \n");
    printf("-------------------------\n");
    printf("Select the food which you like to order \n");
    scanf("%d", &Select);
    switch(Select)
    {
    case 1:                                                             
        printf("Select Steam Momos \n");	
        printf("1. Chicken Steam Momos\n");
        printf("2. Veg Steam momos \n");
        printf("3. Paneer Momos \n");
        break;

    case 2:                                                            
        printf("Select Chowmein \n");
        printf("1. Chicken Chowmein \n");
        printf("2. Veg Chowmein \n");
        break;

    case 3:                                                           
        printf("Select Grilled Sandwich \n");
        printf(" 1. Veg Cheese Sandwich \n");
        printf(" 2. Cheese Sandwich \n");
        printf(" 3. Paneer Sandwich \n");
        
        break;

    case 4:                                                         
        printf("Select Fresh Juices\n");
        printf(" 1. Watermelon Juice. \n");
        printf(" 2. Apple Juice \n");
        printf(" 3. Orange Juice \n");
        printf(" 4. Grapes Juice \n");

        break;

   
    case 5:                                                       
         printf("Select Coffee \n");
         printf(" 1. Cappuccino \n");
         printf(" 2. Espresso \n");
         printf(" 3. cold coffee \n");
         printf(" 4. Chocolate coffee \n");
       
         break;
      
 
 
    default:
        printf("Selection not found!!\n");
      
 
        break;
    }
}
