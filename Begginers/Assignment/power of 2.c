#include <stdio.h>
int main()
{
    unsigned int num;
    int b[32]={0},j=0,n,i,count=0;
    scanf("%d", &num);
    while (num != 0)
    {
n=num%2;
        if (n == 1)
            count++;        
        num = num / 2;
    }
    if (count == 1)
        printf("YES\n");
    else
        printf("NO\n");

	return 0;
}