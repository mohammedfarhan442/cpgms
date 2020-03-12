#include<stdio.h>
int main()
{
char sex,ms;
int age;

printf ("Enter age: \n");
scanf("%d", &age);
printf("Enter Sex: \n");
scanf("%c", &sex);
printf("\nEnter MS");
scanf("%c", &ms);
if (ms=='M')

printf ("The driver is insured \n");
else
{
if (sex=='M')

{
if (age>30)
printf ("Driver is insured \n");

else
printf ("Driver is not insured \n");
}
else
{

if (age>25)
printf ("Driver is insured \n");
else
printf ("Driver is not insured \n");


}
}
}
