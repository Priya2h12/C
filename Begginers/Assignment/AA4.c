#include <stdio.h>
int main()
{
char c;
printf("Enter a character:");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
printf("%c character is an alphabet.",c);
else
printf("%c character is not an alphabet.",c);
return 0;
}
