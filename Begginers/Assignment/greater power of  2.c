#include<stdio.h>
int main(void)
{
	int no,i,n,r,d;
	printf("enter the number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		n=pow(2,i);
		if(n>no)
		{
			d=i;
			break;
		}
	}
	r=pow(2,d);
	printf("\n%d",r);
	
	return 0;
}