#include <stdio.h>

int main(void) 
{
int n1,n2,rem,gcd;
printf("\n enter the first number:");
scanf("%d",&n1);
printf("\n enter the second number:");
scanf("%d",&n2);
do
{
rema=n1%n2;
if(rem==0)
break;
n1=n2;
n2=rem;
}while(rem!=0);
gcd=n2;
printf("\n the gcd of the given number is: %d",gcd);
return 0;
}