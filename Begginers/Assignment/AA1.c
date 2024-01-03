//WAP to check if the number is positive or negative.
#include <stdio.h>
int main() 
{
int number;
printf("Enter a number\n");
scanf("%d",&number);
if(number>=0)
printf(" Entered number is a positive number\n",number);
else
printf(" Entered number is a negative number\n",number);
	return 0;
}
