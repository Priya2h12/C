#include<stdio.h>
int main()
{
    int digit,sum=0;
    printf("enter the number");
    scanf("%d",&digit);
while(digit!=0)
{
int number=digit%10;
sum=sum+number;
digit=digit/10;
}
printf("%d",sum);
return 0;
}