#include<stdio.h>

int main(void) 

{

int hr1,min1,hr2,min2,hr,min;

scanf("%d %d\n",&hr1,&min1);

scanf("%d %d\n",&hr2,&min2);

if(hr1>hr2)

{

hr=hr1-hr2;

}

else
{
hr=hr2-hr1;

}

if(min1>min2)

{

min=min1-min2;

}

else

{

min=min2-min1;

}

printf("%d %d\n",hr,min);

return 0;

}