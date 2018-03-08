#include <stdio.h>

int main(void) 
{
	int a,b,p,i,flag=0;
	printf("enter the two number:");
	scanf("%d %d",&a,&b);
	p=a*b;
	for(i=1;i<=p/2;i++)
	{
		if(i*i==p)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}