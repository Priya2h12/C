include <stdio.h>

int main(void) 
{
	int a,b,i;
	printf("\nenter the two numbers:");
	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&a,&b);
	if(a>b)
	{
		printf("\n%d",a-b);
	}
	else
	{
		printf("\n%d",b-a);
	}
	}
	return 0;
}