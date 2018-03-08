#include <stdio.h>

int main(void) 
{
int n1,n2,rem,lcm,gcd,a,b;
printf("\n enter the first number:");
scanf("%d",&n1);
printf("\n enter the second number:");
scanf("%d",&n2);
a=n1;
b=n2;
do
{
rem=n1%n2;
if(rem==0)
break;
n1=n2;
n2=rem;
}while(rem!=0);
gcd=n2;
lcm=(a*b)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
return 0;
}