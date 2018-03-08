#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[50];
	int i,a;
	printf("\nenter the alphanumeric string:\n");
	scanf("%s",s);
	a=strlen(s);
	for(i=0;i<a;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}