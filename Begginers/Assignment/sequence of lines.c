#include <stdio.h>

int main(void) 
{
	int a,b,i;
	char sym;
	printf("\n enter the two numbers:\n");
	for(i=1;i<=4;i++)
	{
		scanf("%d %c %d",&a,&sym,&b);
		if(sym=='/')
		{
			printf("%d\n",a/b);
		}
		else
		{
			printf("%d\n",a%b);
		}
	}
	return 0;
}