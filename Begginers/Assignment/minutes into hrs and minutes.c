#include<stdio.h>
int main()

{
    
int minutes,hours,min;
    
printf("enter time in minutes:");
    
scanf("%d",&minutes);
    
{
        
hours=minutes/60;
 
min=minutes-(hours*60);   
}
    
printf("%dhours%dminutes",hours,min);
   

}
