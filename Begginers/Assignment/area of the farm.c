#include <stdio.h>

int main(void) 
{
	float l,b,area;
	printf("enter the length and breadth values of the farm:");
	scanf("%f %f",&l,&b);
	area=l*b;
	printf("\n%0.5f",area);
	return 0;
}