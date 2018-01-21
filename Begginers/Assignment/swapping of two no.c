#include<stdio.h>
int main()
{
    int a=37,b=73,temp;
    {
        temp=a;
        a=b;
        b=temp;
    }
      printf("the a value is%d",a);
      printf("the b value is%d",b);
}