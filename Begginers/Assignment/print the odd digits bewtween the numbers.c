#include <stdio.h>

int main(void) 
{
	int n,r,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	n=rev;
	while(n!=0)
	{
		r=n%10;
		if(r%2==1)
		{
		printf("%d ",r);
		}
		n=n/10;
	}
	return 0;

}