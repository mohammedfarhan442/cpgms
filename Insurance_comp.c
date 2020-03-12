#include<stdio.h>
int main()
 {
 
int Select;
int age, gender, status, male, female, married, unmarried;
 printf("------------------------------------------------- \n");
 printf("1. Select your current status (Married/ Unmarried): \n");
 printf("2. Select your Gender (M / F): \n");
 printf("3. Input your Age: \n");
 
 printf("Fill the form: \n");
 scanf("%d", &Select);
 
 switch (Select);
 
 {
  case 1: 
   
    if (status=married)
 
 printf("Applicable for further process. %d \n", status);
 

 else 
  
  printf("Not Eligible for further process. %d \n", status);
 
  break;

 case 2:
    if (gender=male)
 
 printf("Male %d \n", gender);
 
 else 
  
 printf("Female %d \n", gender);
 
   break;
 case 3:
 
    if (age<=40)
 
  printf(" only for male driver. %d \n", age);
 
 
 else 
  if (age<=36)
 
printf("female %d \n", age);

 break;
}
}
