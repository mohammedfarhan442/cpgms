#include <math.h>

#include <stdio.h>

int main()

 {
    int num, originalNum, remainder, n = 0, result = 0, power;
    
	printf("Enter an integer: ");
    
	scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
	 {
       
	    originalNum /= 10;
		++n;
    }
    
	originalNum = num;

    while (originalNum != 0) 
	{
        remainder = originalNum % 10;

        // pow() returns a double value
        // round() return the equivalent int
        
        
        power = round(pow(remainder, n));
        
		result += power;
        
		originalNum /= 10;
    }

    if (result == num)
       
	    printf("%d is an Armstrong number.", num);
   
    else
        
		printf("%d is not an Armstrong number.", num);
   
    return 0;
}
