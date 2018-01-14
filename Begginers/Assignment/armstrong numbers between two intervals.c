#include <stdio.h>

#include <math.h>

int main(void)

{
    
int n1,n2, i, t1, t2, r,n = 0,res=0;
   
printf("Enter two numbers: ");
    
scanf("%d %d", &n1,&n2);
    
printf("Armstrong numbers between %d an %d are: ",n1,n2);
    
for(i=n1+1;i<n2;++i)
    
{
        
t2=i;
        
t1=i;
        
while(t1!=0)
        
{
            
t1 /=10;
            
++n;
        
}
        
while(t2!=0)
        
{
            
r= t2%10;
            
res +=pow(remainder, n);
            
t2 /= 10;
        
}

if(res==i) 
        
{
            
printf("%d ", i);
        
}
        
n=0;
        
res=0;

    
}
    
return 0;

}
