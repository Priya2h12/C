#include <stdio.h>
#include<string.h>
int main(void) 
{
	char string[50];
	int i,flag=0;
	printf("\nenter the string:");
	scanf("%s",string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==string[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	return 0;
}