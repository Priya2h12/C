#include<stdio.h>
int main(void)
{
int n,reverse=0,temp;
{
printf("Enter a number");\
scanf("%d",&n);
{
temp=n;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(temp=reverse)
printf("%d is a palindrome",n);
else
printf("%d is not an palindrome",n);
}
}
}
