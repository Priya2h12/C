#include<stdio.h>


int main(void) 
{
   
int n,temp,s=0,r;
    
printf("\nEnter number for checking Armstrong : ");
   
scanf("%d",&n);
 
temp=n;
 
while(n!=0) 
 
{
      
r=n%10;
      
s=s+(r * r * r);
      
n=n/10;
   
}

if(temp==s)
      
printf("yes");
   
else
      
printf("no");

   
return (0);

}