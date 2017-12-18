#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("\nEnter any Integer Value\n");
scanf("%d", &num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
printf("Sum of Natural Numbers=%d",sum);
return 0;
}
