#include <stdio.h>
int main() 
{
	int n,sum=0,i,average;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	printf("%d",average);
	
	return 0;
}