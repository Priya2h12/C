#include<stdio.h>
#include<string.h>
int main(void)
{
char str1[20],str2[20];
int len1,len2,i,sum1=0,sum2=0;
scanf("%s",str1);
scanf("%s",str2);
len1=strlen(str1);
len2=strlen(str2);
for(i=0;i<len1;i++)
{
sum1=sum1+str1[i];
}
for(i=0;i<len2;i++)
{
sum2=sum2+str2[i];
}
if(sum1>sum2)
{
printf("%s",str1);
}
else if(sum2>sum1)
{
printf("%s",str2);
}
else
{
printf("%s",str1);
}
return 0;
}

