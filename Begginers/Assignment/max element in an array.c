#include <stdio.h>
#include<string.h>
int main() 
{
int arr[10],i,n,max=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
	if(max<arr[i])
	{
		max=arr[i];
	}
}
printf("%d",max);
return 0;
}