#include<stdio.h>
#include<string.h>
int main(void)
{
int i,len,k=0;
char s[10],b[10];
scanf("%s",s);
len=strlen(s);
for(i=len;i>=0;i--)
{
b[k]=s[i];
k++;
}
if(strcmp(s,b)==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
