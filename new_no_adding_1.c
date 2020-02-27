#include<stdio.h>
int main()
{
int a,b=0,c=0,d=0,e=0;
printf("Enter the number: ");
scanf("%d",&a);
b=a;
while(b>0)
{
b=b/10;
++c;
}
printf("Number of digits: %d \n",c);
while(c!=0)
{
d=d*10+1;
c--;
}
e=a+d;
printf(" New number:%d \n",e);

return 0;
}
