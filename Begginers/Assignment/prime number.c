#include<stdio.h>
int main()
{
int a,i,flag = 0;
scanf("%d",&a); 

int div = a/2;
for(i=2;i<div;i++)

{
    if(a%i==0)
    {
        flag = 1;
        break;
    }
}

if(flag == 0)
{
    int temp,rev=0,rem;
  
   temp = a;
   while (a!=0)
   {
       rem = a%10;
       rev = (rev*10)+rem;
       a=a/10;
   }

 if(temp == rev)
{
    printf("yes");
    
}
}

else
{
    printf("not");
   return 0; 
}
}