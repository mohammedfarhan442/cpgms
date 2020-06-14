#include <stdio.h> 
#include<math.h>
 
int main() 
{ 
    int Select; 
    
	int  a,b,c; 
    
	int sum, sub, multi, mode; 
    
	float div; 
  
    printf("X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X \n"); 
     
    printf("Select the Arithmetic Operations for Calculations: \n"); 
     
    printf(" 1.------> Addition \n"); 
     
    printf(" 2------> Subtraction \n"); 
    
    printf(" 3------> Division \n"); 
    
    printf(" 4------> Multiplication \n"); 
    
    printf(" 5------> Modules \n"); 
    
    printf("X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X \n"); 
 
    scanf("%d", &Select); 
    
    switch(Select) 
    { 
    case 1:                                                              
        printf("Enter three numbers for Addition \n"); 

 
         
        scanf("%d%d%d", &a,&b,&c); 
         
        sum= a+b+c; 
         
        printf("Addition for three numbers are equls to: %d \n", sum); 
         
        break; 
 
    case 2:                                                             
        printf("Enter three numbers for Subtraction \n"); 
         
        scanf("%d%d%d", &a,&b,&c); 
        
        sub= a-b-c; 
         
        printf("Subtraction of three numbers are equals to: %d \n", sub); 
         
        break; 
 
    case 3:                                                            
        printf("Enter three numbers for Division \n"); 
         
         scanf("%d%d%d", &a,&b,&c); 
          
        div= a/b/c; 
         
        printf("Division of three numbers are equals to: %d \n", div); 
        
        break; 
 
    case 4:                                                          
        printf("Enter three numbers for Multiplication \n"); 
         
 
 
 
 
         scanf("%d%d%d", &a,&b,&c); 
          
        multi=a*b*c; 
         
        printf("Multiplication of three numbers are equals to:%d \n", multi); 
       
        break; 
 
    
    case 5:                                                        
         printf("Enter three numbers for Modules \n"); 
          
          scanf("%d%d%d", &a,&b,&c); 
           
        mode= a%b%c; 
         
        printf("Modules for three numbers are equals to: %d \n", mode); 
          
        
         break; 
 
    default: 
        printf("Selection not found!!\n"); 
      
       break; 
    } 
} 
