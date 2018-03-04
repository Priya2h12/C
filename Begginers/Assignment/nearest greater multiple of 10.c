#include<stdio.h>

int main()

{

    int n1,n2;

    scanf("%d",&n2);

    n1=n2+1;

    while(n1!=0)

    {

        if(n1%10==0)

        {

            printf("%d",n1);

            break;

        }

        n1++;

    }

    return 0;

}