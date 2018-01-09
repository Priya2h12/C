
#include<stdio.h>
int main()
{
int n,i,flag = 0;
scanf("%d",&n); 

int div = n/2;
for(i=2;i<div;i++)

{
    if(n%i==0)
    {
        flag = 1;
        break;
    }
}

if(flag == 0)
{
    int temp,rev=0,rem;
  
   temp = n;
   while (n!=0)
   {
       rem = n%10;
       rev = (rev*10)+rem;
       n =n/10;
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
