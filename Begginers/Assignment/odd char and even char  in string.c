#include <stdio.h>

int main(void) 
{
	char string[20];
	int i,a;
	printf("\nenter the string:\n");
	scanf("%s",string);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%c",string[i]);
		}
		
	}
	printf(" ");
	for(i=0;i<n;i++)
	{
		if(i%2==1)
		{
			printf("%c",string[i]);
		}
		
	}
	
	return 0;
}