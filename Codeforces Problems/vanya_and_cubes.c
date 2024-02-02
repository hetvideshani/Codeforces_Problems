#include<stdio.h>

int main()
{
    int n,i=1,sum=0,total=0,count=0;
    scanf("%d",&n);                         

    while(total+sum+i<=n)                   
    {
        sum=sum+i;                          
        total=total+sum;                    
        count++;      
        i++;                                  
    }

    printf("%d",count);
    
    return 0;
}