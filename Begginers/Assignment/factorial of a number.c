#include <stdio.h>

int main(void)

{
    
int n, i;
    
unsigned long long factorial = 1;

    
printf("Enter an integer: ");
    
scanf("%d",&n);
     
if(n<0)
     
printf("Factorial of a negative number doesn't exist.");
     
else
    
{
    
for(i=1;i<=n;++i)
        
{
            
factorial *= i;             
        
}
        
printf("Factorial of %d = %llu", n, factorial);
    
}

    
return 0;

}

