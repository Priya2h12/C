#include<stdio.h>
int main(void) 
{
	int n,l,r;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the l and right r:");
	scanf("%d %d",&l,&r);
	if(n>l && n<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}