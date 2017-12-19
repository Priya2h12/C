#include<stdio.h>
int main(void)
{
int base,exponent;
long long power=1;
int i;
printf("Enter a base number:");
scanf("%d",&base);
printf("Enter a exponent number:");
scanf("%d",&exponent);
for(i=1;i<=exponent;i++)
{
power=power*base;
}
printf(" %d ^ %d = %lld",base,exponent,power);
return 0;
}
