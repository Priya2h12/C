#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s1[50],s2[50];
	int i,j;

	scanf("%s",s1);
	
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		
	}
	for(j=0;s2[j]!='\0';j++)
	{
		s1[i]=s2[j];
		i++;
	}
	s1[i]='\0';
	printf("\n%s",s1);
	
	return 0;
}